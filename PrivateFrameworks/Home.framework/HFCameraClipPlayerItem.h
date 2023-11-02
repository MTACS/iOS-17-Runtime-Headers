
@interface HFCameraClipPlayerItem : AVPlayerItem <AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem> {
    HMCameraClip * _clip;
    HMCameraClipManager * _clipManager;
    NSObject<OS_dispatch_queue> * _resourceLoaderQueue;
    HFCameraClipVideoAssetContextProvider * _videoContextProvider;
}

@property (nonatomic, readonly) HMCameraClip *clip;
@property (nonatomic, readonly) HMCameraClipManager *clipManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPlayable, nonatomic, readonly) bool playable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceLoaderQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFCameraClipVideoAssetContextProvider *videoContextProvider;

+ (id)_assetOptionsForClip:(id)arg1;
+ (id)_playlistURL;

- (void).cxx_destruct;
- (id)clip;
- (id)clipManager;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2;
- (id)initWithClipManager:(id)arg1 clip:(id)arg2;
- (bool)isPlayable;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)resourceLoaderQueue;
- (id)videoContextProvider;

@end
