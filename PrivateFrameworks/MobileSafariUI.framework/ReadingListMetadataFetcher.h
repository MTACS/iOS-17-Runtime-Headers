
@interface ReadingListMetadataFetcher : NSObject {
    NSMutableArray * _bookmarksPendingMetadata;
    NSMutableArray * _bookmarksPendingThumbnail;
    WebBookmarkCollection * _collection;
    <ReadingListMetadataProvider> * _defaultThumbnailProvider;
    bool  _isFetchingMetadata;
    bool  _isFetchingThumbnail;
    NSObject<OS_dispatch_queue> * _metadataSynchronizationQueue;
}

+ (id)sharedMetadataFetcher;
+ (bool)shouldFetchMetadataForBookmark:(id)arg1;
+ (bool)shouldFetchThumbnailForBookmark:(id)arg1;

- (void).cxx_destruct;
- (void)_didFailMetadataFetchForBookmarkWithID:(int)arg1;
- (void)_didFinishFetchingMetadataForItem:(id)arg1;
- (void)_didFinishFetchingThumbnailForItem:(id)arg1;
- (void)_fetchMetadataForPendingItem:(id)arg1;
- (void)_fetchMetadataWithDefaultProviderForPendingItem:(id)arg1;
- (void)_fetchNextItemMetadata;
- (void)_fetchNextItemThumbnail;
- (void)_fetchThumbnailForPendingItem:(id)arg1;
- (void)_fetchThumbnailWithDefaultProviderForPendingItem:(id)arg1;
- (id)_initWithBookmarkCollection:(id)arg1;
- (bool)_lockAndSaveBookmark:(id)arg1 postNotification:(bool)arg2;
- (bool)_queue:(id)arg1 containsBookmark:(id)arg2;
- (void)_setThumbnailImage:(id)arg1 fromURL:(id)arg2 forBookmarkWithID:(int)arg3;
- (void)_setTitle:(id)arg1 previewText:(id)arg2 thumbnailURLString:(id)arg3 thumbnailImage:(id)arg4 forItem:(id)arg5;
- (void)fetchMetadataForReadingListBookmark:(id)arg1 withProvider:(id)arg2;
- (void)fetchThumbnailForReadingListBookmark:(id)arg1 withProvider:(id)arg2;

@end
