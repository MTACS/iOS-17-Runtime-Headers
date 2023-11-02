
@interface _PXStoryMusicCurationProviderRequest : NSObject <NSProgressReporting> {
    PHAssetCollection * _assetCollection;
    id /* block */  _completionHandler;
    bool  _hasStarted;
    PXStoryMusicCurationProviderOptions * _options;
    NSProgress * _progress;
    NSArray * _recentlyUsedAppleMusicSongIDs;
    NSArray * _recentlyUsedFlexSongIDs;
    NSMutableArray * _resultHandlers;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryMusicCurationProviderOptions *options;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) NSArray *recentlyUsedAppleMusicSongIDs;
@property (nonatomic, readonly) NSArray *recentlyUsedFlexSongIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCurationResult:(id)arg1;
- (void)appendResultHandler:(id /* block */)arg1;
- (id)assetCollection;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 options:(id)arg2 recentlyUsedFlexSongIDs:(id)arg3 recentlyUsedAppleMusicSongIDs:(id)arg4 completion:(id /* block */)arg5;
- (id)options;
- (id)progress;
- (id)recentlyUsedAppleMusicSongIDs;
- (id)recentlyUsedFlexSongIDs;
- (void)start;

@end
