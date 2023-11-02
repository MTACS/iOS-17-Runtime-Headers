
@protocol PKDashboardDataSource <NSObject>

@required

- (PKDashboardFooterTextItem *)footerTextItemForSection:(unsigned long long)arg1;
- (<PKDashboardItem> *)itemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (PKDashboardHeaderTextItem *)titleForSection:(unsigned long long)arg1;

@optional

- (bool)canDeleteItem:(id <PKDashboardItem>)arg1;
- (void)deleteItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <PKDashboardItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deleteItems:(NSArray *)arg1;
- (bool)isListLayoutForSection:(unsigned long long)arg1;
- (NSString *)navigationBarTitle;
- (void)setDataSourceDelegate:(id <PKDashboardDataSourceDelegate>)arg1;

@end
