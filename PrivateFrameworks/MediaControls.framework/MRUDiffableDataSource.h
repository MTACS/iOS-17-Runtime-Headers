
@interface MRUDiffableDataSource : UITableViewDiffableDataSource {
    <MRUDiffableDataSourceDelegate> * _delegate;
    bool  _supportsEditing;
    bool  _supportsReordering;
}

@property (nonatomic) <MRUDiffableDataSourceDelegate> *delegate;
@property (nonatomic) bool supportsEditing;
@property (nonatomic) bool supportsReordering;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSupportsEditing:(bool)arg1;
- (void)setSupportsReordering:(bool)arg1;
- (bool)supportsEditing;
- (bool)supportsReordering;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;

@end
