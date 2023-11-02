
@protocol TabDocumentDragDropDataSource <TabGroupProvider, NSObject>

@required

- (void)closeTabDocument:(TabDocument *)arg1 animated:(bool)arg2;
- (void)closeTabDocuments:(NSArray *)arg1;
- (NSArray *)currentTabDocuments;
- (void)didBeginTrackingSession:(id <UIDropSession>)arg1;
- (void)didEndTrackingSession:(id <UIDropSession>)arg1;
- (void)hideTabDocuments:(NSSet *)arg1;
- (TabDocument *)insertPlaceholderTabDocumentAfterDocument:(TabDocument *)arg1;
- (bool)isPrivateBrowsingEnabled;
- (void)moveTabDocument:(TabDocument *)arg1 overTabDocument:(TabDocument *)arg2;
- (void)moveTabDocumentToEndOfPinnedTabs:(TabDocument *)arg1;
- (void)performBatchUpdatesWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)registerUndoWithName:(void *)arg1 actions:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSArray *)replacePlaceholderTabDocument:(void *)arg1 withTabDocuments:(void *)arg2 transitionToDragStateWithBlock:(void *)arg3; // needs 3 arg types, found 8: TabDocument *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, long long, id /* block */, unsigned long long, void*
- (TabDocument *)restoreRecentlyClosedTabDocumentWithTabStateData:(SFTabStateData *)arg1;
- (void)sortTabsWithMode:(long long)arg1;
- (<TabCollectionView> *)tabCollectionView;
- (TabDocument *)tabDocumentWithUUID:(NSUUID *)arg1;
- (void)unhideTabDocuments:(NSSet *)arg1;
- (NSArray *)unpinnedTabDocuments;
- (void)willBeginDragSession:(id <UIDragSession>)arg1;
- (void)willEndDragSession:(id <UIDragSession>)arg1;

@end
