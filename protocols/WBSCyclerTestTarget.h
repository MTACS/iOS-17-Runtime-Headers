
@protocol WBSCyclerTestTarget <NSObject>

@required

- (void)clearBookmarksWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)createBookmarkListWithTitle:(void *)arg1 inListWithIdentifier:(void *)arg2 atIndex:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)createBookmarkWithTitle:(void *)arg1 url:(void *)arg2 inListWithIdentifier:(void *)arg3 atIndex:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSURL *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deleteBookmarkWithIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)fetchTopLevelBookmarkList:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSCyclerItemListRepresentation *, void*
- (void)moveBookmarkWithIdentifier:(void *)arg1 intoListWithIdentifier:(void *)arg2 atIndex:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setTitle:(void *)arg1 forBookmarkWithIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setURL:(void *)arg1 forBookmarkWithIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)syncBookmarksWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (void)createProfileWithTitle:(void *)arg1 symbolName:(void *)arg2 inListWithIdentifier:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)setSymbolImageName:(void *)arg1 forBookmarkWithIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
