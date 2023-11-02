
@interface PXContentSyndicationPhotoKitSocialLayerHighlightProvider : NSObject <PXContentSyndicationSocialLayerHighlightProvider> {
    NSHashTable * _assetsWithNilHighlightsCache;
    id /* block */  _highlightFetchBlock;
    PXLRUMemoryCache * _highlightsCache;
    NSMutableDictionary * _observers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didChangeHighlight:(id)arg1 forAsset:(id)arg2 withChangeObservers:(id)arg3;
- (id)_serialQueue_fetchSocialLayerHighlightForAsset:(id)arg1 usingHighlightResultBlock:(id /* block */)arg2;
- (void)_serialQueue_registerChangeObserver:(id)arg1 forAsset:(id)arg2;
- (void)_serialQueue_unregisterChangeObserver:(id)arg1 forAsset:(id)arg2;
- (id)cachedSocialLayerHighlightForAsset:(id)arg1;
- (void)fetchSocialLayerHighlightForAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithHighlightFetchBlock:(id /* block */)arg1;
- (bool)isSocialLayerHighlightCachedForAsset:(id)arg1;
- (void)registerChangeObserver:(id)arg1 forAsset:(id)arg2;
- (id)socialLayerHighlightForAsset:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1 forAsset:(id)arg2;

@end
