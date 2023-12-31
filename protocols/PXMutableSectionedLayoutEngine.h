
@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>

@required

- (<PXSectionedLayoutItem> *)seedItem;
- (struct CGSize { double x1; double x2; })seedSize;
- (void)setDataSourceSnapshot:(id <PXSectionedLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXSectionedLayoutDataSourceChangeDetails>)arg2;
- (void)setSeedItem:(id <PXSectionedLayoutItem>)arg1;
- (void)setSeedSize:(struct CGSize { double x1; double x2; })arg1;

@end
