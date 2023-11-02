
@protocol FATableViewProtocol

@required

- (<UITableViewDataSource> *)dataSource;
- (<UITableViewDelegate> *)delegate;
- (void)reloadData;
- (void)reloadRowsAtIndexPaths:(NSArray *)arg1 withRowAnimation:(long long)arg2;
- (void)setDataSource:(id <UITableViewDataSource>)arg1;
- (void)setDelegate:(id <UITableViewDelegate>)arg1;

@end
