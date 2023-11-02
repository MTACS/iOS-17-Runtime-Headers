
@protocol CPListDataSource <NSObject>

@required

- (NSIndexPath *)firstItemIndexPath;
- (<CPListTemplateItem> *)itemAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;

@end
