
@protocol SXDataTableStyleFactory <NSObject>

@required

- (SXDataTableCellStyle *)cellStyleForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (SXDataTableColumnStyle *)columnStyleForColumnIndex:(unsigned long long)arg1;
- (SXDataTableStyle *)dataTableStyle;
- (SXDataTableCellStyle *)headerCellStyleForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (SXDataTableColumnStyle *)headerColumnStyleForColumnIndex:(unsigned long long)arg1;
- (SXDataTableRowStyle *)headerRowStyleForRowIndex:(unsigned long long)arg1;
- (SXDataTableRowStyle *)rowStyleForRowIndex:(unsigned long long)arg1;

@end
