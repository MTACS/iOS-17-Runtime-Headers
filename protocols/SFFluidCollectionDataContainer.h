
@protocol SFFluidCollectionDataContainer <NSObject>

@required

- (NSIndexPath *)dataSourceIndexPathForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForDataSourceIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;

@end
