# Lab 01 - Data scraping
File README.md này trình bày cách setup môi trường và cách thực thi mã nguồn cho việc cào dữ liệu từ các bài báo trên arXiv. Đồ án này có cấu trúc như sau: 

```
23120266/
│-- src/ # Thư mục chứa mã nguồn
│ │-- 23120266.ipynb
│ │-- requirements.txt # Chứa các dependencies để cài đặt vào môi trường
│
│-- README.md # Hướng dẫn cách setup môi trường và cách thực thi mã nguồn
│-- Report.docx # Báo cáo
```

## Setup môi trường 
1. Đầu tiên, mở Terminal lên và điều hướng vào thư mục chứa đồ án 
```bash
cd đường/dẫn/vào/23120266
```

2. Tiếp theo là khởi tạo môi trường conda với phiên bản Python 3.10 
```bash
conda create -n datasci_lab01 python=3.10
```

3. Sau đó kích hoạt môi trường conda 
```bash
conda activate 
```

4. Di chuyển đến thư mục src
```bash
cd src  
```

5. Cài các dependencies từ file requirement.txt 
```bash
pip install -r requirement.txt 
```

6. Cài gói IPykernel từ môi trường conda `datasci_lab01` cho Jupyter Notebook
```bash
python -m ipykernel install --user --name datasci_lab01 --display-name "Python (datasci_lab01)"
```

## Thực thi mã nguồn 
1. Mở Jupyter Notebook
```bash
jupyter notebook
```

2. Mở file `23120266.ipynb` lên, trên giao diện Jupyter Notebook này, vào `Kernel` > `Select Change kernel` > Chọn `Python (datasci_lab01)`

3. Cuối cùng, vào `Run" > "Run All Cells` or `Kernel` - `Restart Kernel & Run All Cells...` để chạy chương trình từ trên xuống dưới
