
@protocol PXSectionedLayoutEngineDataSourceSnapshot <PXLayoutEngineDataSourceSnapshot>

@required

- (<PXLayoutItemInput> *)inputForItem:(id <PXSectionedLayoutItem>)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;

@end
