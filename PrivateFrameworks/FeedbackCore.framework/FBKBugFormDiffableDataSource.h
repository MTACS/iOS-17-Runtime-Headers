
@interface FBKBugFormDiffableDataSource : UITableViewDiffableDataSource {
    NSString * __attachmentSectionHeaderCached;
    FBKBugFormTableViewController * _thisViewController;
}

@property (nonatomic, retain) NSString *_attachmentSectionHeaderCached;
@property (nonatomic) FBKBugFormTableViewController *thisViewController;

- (void).cxx_destruct;
- (id)_attachmentSectionHeaderCached;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2;
- (void)setThisViewController:(id)arg1;
- (void)set_attachmentSectionHeaderCached:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)thisViewController;

@end
