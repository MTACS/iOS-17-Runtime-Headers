
@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol> {
    double  mCapturedColumnWidthTotal;
    double * mCapturedColumnWidths;
    double  mCapturedRowHeightTotal;
    double * mCapturedRowHeights;
    TSTCellRegion * mColumnRegion;
    double * mCurrentColumnWidths;
    double * mCurrentRowHeights;
    double * mMinimumColumnWidths;
    double * mMinimumRowHeights;
    unsigned short  mNumberOfColumns;
    unsigned short  mNumberOfResizableColumns;
    unsigned short  mNumberOfResizableRows;
    unsigned short  mNumberOfRows;
    TSTCellRegion * mRowRegion;
    unsigned char  mStartColumnIndex;
    unsigned short  mStartRowIndex;
    int  mTableRowsBehavior;
    bool  mValid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)applyColumnTotalWidth:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (struct CGSize { double x1; double x2; })capturedTableSize;
- (id)columnWidths;
- (void)dealloc;
- (void)enumerateColumnWidthsUsingBlock:(id /* block */)arg1;
- (void)enumerateRowHeightsUsingBlock:(id /* block */)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (bool)hasHeightForRow:(unsigned short)arg1;
- (bool)hasWidthForColumn:(unsigned char)arg1;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
- (id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
- (void)invalidate;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (id)rowHeights;
- (bool)valid;

@end
