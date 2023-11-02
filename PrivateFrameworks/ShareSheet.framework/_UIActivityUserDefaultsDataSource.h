
@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource {
    <_UIActivityUserDefaultsDataSourceProxy> * _dataSourceProxy;
}

@property (nonatomic) <_UIActivityUserDefaultsDataSourceProxy> *dataSourceProxy;

- (void).cxx_destruct;
- (id)dataSourceProxy;
- (void)setDataSourceProxy:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@end
