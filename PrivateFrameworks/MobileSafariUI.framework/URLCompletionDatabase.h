
@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSCloudTabDeviceObserving, WBSURLCompletionDataSource> {
    <WBBookmarkProvider> * _bookmarkProvider;
    NSCache * _bookmarksCache;
    NSArray * _cloudDevices;
    <WBSCloudTabDeviceProvider> * _cloudTabStore;
    NSObject<OS_dispatch_queue> * _cloudTabsAccessQueue;
    NSString * _profileIdentifier;
    int  _searchableCollectionsMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int searchableCollectionsMask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCloudDevices:(id)arg1;
- (void)clearBookmarksCache;
- (void)cloudTabDeviceProvider:(id)arg1 didUpdateCloudTabsInProfileWithIdentifier:(id)arg2;
- (void)dealloc;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 options:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(bool)arg3;
- (id)initWithCloudTabStore:(id)arg1 profileIdentifier:(id)arg2 searchableCollectionsMask:(int)arg3 bookmarkProvider:(id)arg4;
- (int)searchableCollectionsMask;
- (void)setSearchableCollectionsMask:(int)arg1;

@end
