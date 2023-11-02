
@interface _UITableViewDiffableDataSource : _UIDiffableDataSourceSnapshotter {
    long long  _defaultRowAnimation;
}

@property (nonatomic) long long defaultRowAnimation;
@property (nonatomic, readonly) UITableView *tableView;

- (long long)defaultRowAnimation;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(id /* block */)arg2 cellConfigurationHandler:(id /* block */)arg3;
- (void)setDefaultRowAnimation:(long long)arg1;
- (id)tableView;

@end
