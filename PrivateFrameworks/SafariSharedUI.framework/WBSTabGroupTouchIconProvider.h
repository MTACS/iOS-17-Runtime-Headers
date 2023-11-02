
@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider <WBTabGroupManagerObserver> {
    NSMutableDictionary * _tabGroupIconMetadataCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelRequestsAndClearCacheForTabGroup:(id)arg1;
- (void)_cancelRequestsAndClearCacheForTabGroup:(id)arg1 metadata:(id)arg2;
- (id)backgroundColor;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (id)configuration;
- (id)defaultFolderIconForRequest:(id)arg1;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)iconForTabGroup:(id)arg1;
- (id)init;
- (void)tabGroupManager:(id)arg1 didRemoveTabGroupWithUUID:(id)arg2;
- (void)tabGroupManager:(id)arg1 didUpdateTabsInTabGroupWithUUID:(id)arg2;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;
- (void)updateIconForTabGroupIfNeeded:(id)arg1 tabProvider:(id)arg2;

@end
