
@interface WBSExtensionCyclerCommandHandler : NSObject <WBSCyclerTestTarget>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)deleteBookmarkWithIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)fetchTopLevelBookmarkList:(id /* block */)arg1;
- (void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(id /* block */)arg3;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)arg1;

@end
