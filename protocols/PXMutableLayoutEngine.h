
@protocol PXMutableLayoutEngine <NSObject>

@required

- (<PXLayoutItem> *)seedItem;
- (void)setDataSourceSnapshot:(id <PXLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXLayoutDataSourceChangeDetails>)arg2;
- (void)setSeedItem:(id <PXLayoutItem>)arg1;

@end
