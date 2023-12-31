
@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>

@required

- (double)applyResizeHeightFactor:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (void)captureNewMinimumRowHeights:(TSTMasterLayout *)arg1;
- (double)getColumnInitialWidth:(unsigned char)arg1;
- (double)getColumnWidth:(unsigned char)arg1;
- (double)getColumnWidthResize:(unsigned char)arg1;
- (double)getRowHeight:(unsigned short)arg1;
- (double)getRowHeightResize:(unsigned short)arg1;
- (double)getRowInitialHeight:(unsigned short)arg1;
- (bool)hasHeightForRow:(unsigned short)arg1;
- (bool)hasWidthForColumn:(unsigned char)arg1;
- (id)initWithDynamicResizeInfo:(id <TSTLayoutDynamicResizeInfoProtocol>)arg1;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 columnRegion:(TSTCellRegion *)arg2;
- (id)initWithMasterLayout:(TSTMasterLayout *)arg1 rowRegion:(TSTCellRegion *)arg2;
- (void)invalidate;
- (bool)valid;

@end
