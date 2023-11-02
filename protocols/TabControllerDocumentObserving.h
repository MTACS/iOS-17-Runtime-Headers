
@protocol TabControllerDocumentObserving <NSObject>

@optional

- (void)tabController:(TabController *)arg1 didCloseTabDocuments:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3 info:(unsigned long long)arg4;
- (void)tabController:(TabController *)arg1 didInsertTabDocument:(TabDocument *)arg2;
- (void)tabController:(TabController *)arg1 didMoveTabDocument:(TabDocument *)arg2 overTabDocument:(TabDocument *)arg3;
- (void)tabController:(TabController *)arg1 didReplaceTabDocument:(TabDocument *)arg2 withTabDocument:(TabDocument *)arg3;
- (void)tabController:(TabController *)arg1 didSwitchFromTabDocument:(TabDocument *)arg2 toTabDocument:(TabDocument *)arg3;
- (void)tabController:(TabController *)arg1 didSwitchFromTabGroup:(WBTabGroup *)arg2;
- (void)tabControllerDidChangeCurrentTabDocuments:(TabController *)arg1;
- (void)tabControllerDidEndUpdates:(TabController *)arg1;
- (void)tabControllerDocumentCountDidChange:(TabController *)arg1;
- (void)tabControllerWillBeginUpdates:(TabController *)arg1;

@end
