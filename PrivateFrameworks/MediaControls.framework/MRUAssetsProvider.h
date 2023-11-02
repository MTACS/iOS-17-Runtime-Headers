
@interface MRUAssetsProvider : NSObject {
    NSCache * _applicationCache;
    NSMutableDictionary * _completionBlocks;
    NSCache * _imageCache;
    NSDate * _purgeApplicationCacheDate;
}

@property (readonly) NSCache *applicationCache;
@property (readonly) NSMutableDictionary *completionBlocks;
@property (readonly) NSCache *imageCache;
@property (nonatomic, retain) NSDate *purgeApplicationCacheDate;

+ (id)airplay;
+ (id)airplayVideo;
+ (id)backward;
+ (id)backwardSymbol;
+ (id)collapsedRoutingChevron;
+ (id)controlOtherSpeakers;
+ (id)dislike;
+ (id)emptyArtwork;
+ (id)expandedRoutingChevron;
+ (id)favoritePackageName;
+ (id)favoriteSymbol;
+ (id)forward;
+ (id)forwardBackwardPackageName;
+ (id)forwardSymbol;
+ (id)genericDevices;
+ (id)goBackwardForTimeInterval:(double)arg1;
+ (id)goBackwardSymbolForTimeInterval:(double)arg1;
+ (id)goForwardForTimeInterval:(double)arg1;
+ (id)goForwardSymbolForTimeInterval:(double)arg1;
+ (id)languageOptions;
+ (id)like;
+ (id)menu;
+ (id)packageDescriptionWithName:(id)arg1;
+ (id)packageWithName:(id)arg1;
+ (id)pause;
+ (id)pauseSymbol;
+ (id)phone;
+ (id)play;
+ (id)playPauseStopPackageName;
+ (id)playSymbol;
+ (id)routingAccessoryMultiDeselected;
+ (id)routingAccessoryMultiSelected;
+ (id)routingAccessorySelected;
+ (id)sharedAssetsProvider;
+ (id)sharing;
+ (id)stop;
+ (id)stopSymbol;
+ (id)suggestedRouteWaveformPackageName;
+ (id)tvRemote;
+ (id)volumeBoldPackageName;
+ (id)volumeMax;
+ (id)volumeMin;
+ (id)volumePackageName;
+ (id)volumeRTLPackageName;
+ (id)volumeRelativeMinus;
+ (id)volumeRelativePlus;
+ (id)wirelessSharing;
+ (id)wishlist;

- (void).cxx_destruct;
- (id)applicationCache;
- (void)applicationIconForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)applicationIconForBundleIdentifier:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)completionBlocks;
- (id)imageCache;
- (void)imageForURL:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)purgeApplicationCacheDate;
- (void)setPurgeApplicationCacheDate:(id)arg1;

@end
