
@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer> {
    <AVTImageCache> * _cache;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _colorQueue;
    AVTRenderingScope * _colorScope;
    <AVTDeviceResourceConsumerDelegate> * _consumerDelegate;
    AVTRenderingScope * _defaultScope;
    <AVTUILogger> * _logger;
    NSObject<OS_dispatch_queue> * _presetQueue;
    AVTAvatarConfigurationImageRenderer * _renderer;
    <AVTTaskScheduler> * _renderingScheduler;
}

@property (nonatomic, readonly) <AVTImageCache> *cache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *colorQueue;
@property (nonatomic, readonly) AVTRenderingScope *colorScope;
@property (nonatomic) <AVTDeviceResourceConsumerDelegate> *consumerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) AVTRenderingScope *defaultScope;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presetQueue;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly) <AVTTaskScheduler> *renderingScheduler;
@property (readonly) Class superclass;

+ (id)configurationToRenderForPreset:(id)arg1 overrides:(id)arg2 baseConfiguration:(id)arg3;
+ (id)presetImageCacheWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (id)cache;
- (id)callbackQueue;
- (id)colorQueue;
- (id)colorScope;
- (id)consumerDelegate;
- (id)defaultScope;
- (id)initWithCache:(id)arg1 environment:(id)arg2;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 renderingQueueProvider:(id /* block */)arg3 callbackQueue:(id)arg4 renderer:(id)arg5 defaultScope:(id)arg6 environment:(id)arg7;
- (id)initWithRenderingScheduler:(id)arg1 environment:(id)arg2;
- (id)logger;
- (id)presetQueue;
- (id /* block */)providerForImageForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* block */)arg4;
- (id /* block */)providerForThumbnailForModelColor:(id)arg1;
- (id /* block */)providerForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 poseOverride:(id)arg3 avatarConfiguration:(id)arg4 framingMode:(id)arg5;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (id)renderThumbnailForModelColor:(id)arg1;
- (id)renderer;
- (id)renderingScheduler;
- (void)setConsumerDelegate:(id)arg1;

@end