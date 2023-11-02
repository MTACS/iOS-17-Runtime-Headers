
@interface FCAVAssetPrewarmer : NSObject <FCAVAssetPrewarming, FCKeyedOperationQueueDelegate> {
    <FCAVAssetResourceLoaderType> * _assetResourceLoader;
    unsigned long long  _highWaterMark;
    NSMutableDictionary * _interestModificationDates;
    NSMutableDictionary * _interestTokensByAsset;
    NSCountedSet * _interestedAssets;
    FCKeyedOperationQueue * _prefetchQueue;
    NSTimer * _reprocessTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reprocessInterestedAssets;
- (void)_revisitSuspendedState;
- (void)addInterestInAsset:(id)arg1;
- (id)init;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(id /* block */)arg3;
- (void)removeInterestInAsset:(id)arg1;

@end
