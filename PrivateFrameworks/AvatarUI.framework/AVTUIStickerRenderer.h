
@interface AVTUIStickerRenderer : NSObject {
    AVTMemoji * _avatar;
    <AVTAvatarRecord> * _avatarRecord;
    <AVTResourceCache> * _cache;
    <AVTCacheableResource> * _cacheableResourceItem;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _encodingQueue;
    AVTUIEnvironment * _environment;
    AVTClippableImageStore * _imageStore;
    AVTUILogger * _logger;
    bool  _parallelizeEncoding;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    <AVTStickerTaskScheduler> * _renderingScheduler;
    AVTUIStickerGeneratorPool * _stickerGeneratorPool;
    bool  _usingService;
}

@property (nonatomic, readonly) AVTMemoji *avatar;
@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, readonly) <AVTResourceCache> *cache;
@property (nonatomic, readonly) <AVTCacheableResource> *cacheableResourceItem;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *encodingQueue;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTClippableImageStore *imageStore;
@property (nonatomic, readonly) AVTUILogger *logger;
@property (nonatomic) bool parallelizeEncoding;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic, readonly) <AVTStickerTaskScheduler> *renderingScheduler;
@property (nonatomic, readonly) AVTUIStickerGeneratorPool *stickerGeneratorPool;
@property (nonatomic) bool usingService;

+ (bool)clearStickersForAvatarRecordIdentifier:(id)arg1;
+ (bool)clearStickersForAvatarRecordIdentifier:(id)arg1 withEnvironment:(id)arg2;
+ (id)imageEncoder;
+ (id)stickerCacheWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)_providerForResource:(id)arg1 forScope:(id)arg2 queue:(id)arg3 renderWithCompletionHandler:(id /* block */)arg4;
- (id /* block */)_providerForResourceForScope:(id)arg1 queue:(id)arg2 renderWithCompletionHandler:(id /* block */)arg3;
- (id /* block */)_scheduledRemoteImageRendererProviderForStickerConfiguration:(id)arg1 correctClipping:(bool)arg2;
- (id /* block */)_scheduledTaskForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderWithCompletionHandler:(id /* block */)arg4 resourceHandler:(id /* block */)arg5 synchronous:(bool)arg6;
- (id)avatar;
- (id)avatarRecord;
- (id)cache;
- (id)cacheableResourceItem;
- (id)callbackQueue;
- (id)encodingQueue;
- (id)environment;
- (id)imageStore;
- (id)initWithAvatarRecord:(id)arg1 avatar:(id)arg2 cache:(id)arg3 imageStore:(id)arg4 stickerGeneratorPool:(id)arg5 environment:(id)arg6 renderingScheduler:(id)arg7 renderingQueue:(id)arg8 encodingQueue:(id)arg9 callbackQueue:(id)arg10;
- (id)initWithAvatarRecord:(id)arg1 avatar:(id)arg2 stickerGeneratorPool:(id)arg3 scheduler:(id)arg4 imageStore:(id)arg5 environment:(id)arg6;
- (id)initWithAvatarRecord:(id)arg1 cache:(id)arg2 imageStore:(id)arg3 stickerGeneratorPool:(id)arg4 environment:(id)arg5 renderingScheduler:(id)arg6 renderingQueue:(id)arg7 encodingQueue:(id)arg8 callbackQueue:(id)arg9;
- (id)initWithAvatarRecord:(id)arg1 cache:(id)arg2 renderingScheduler:(id)arg3 renderingQueue:(id)arg4 encodingQueue:(id)arg5 stickerGeneratorPool:(id)arg6 environment:(id)arg7;
- (id)initWithAvatarRecord:(id)arg1 stickerGeneratorPool:(id)arg2 scheduler:(id)arg3;
- (id)initWithAvatarRecord:(id)arg1 stickerGeneratorPool:(id)arg2 scheduler:(id)arg3 imageStore:(id)arg4;
- (id)logger;
- (bool)parallelizeEncoding;
- (id /* block */)providerForResource:(id)arg1 forScope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* block */)arg4;
- (id /* block */)providerForResourceForScope:(id)arg1 queue:(id)arg2 renderingHandler:(id /* block */)arg3;
- (id /* block */)providerForResourceWithAvatarConfiguration:(id)arg1 forScope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* block */)arg4;
- (id)renderStickerResourceForItem:(id)arg1 scope:(id)arg2 configuration:(id)arg3 correctClipping:(bool)arg4;
- (id)renderStickerResourceForItem:(id)arg1 scope:(id)arg2 stickerConfiguration:(id)arg3 avatarConfiguration:(id)arg4 correctClipping:(bool)arg5;
- (id)renderingQueue;
- (id)renderingScheduler;
- (void)saveImageForResource:(id)arg1 forScope:(id)arg2 synchronous:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)scheduledStickerResourceProviderForStickerConfiguration:(id)arg1;
- (id /* block */)scheduledStickerResourceProviderForStickerConfiguration:(id)arg1 correctClipping:(bool)arg2;
- (id /* block */)scheduledStickerResourceProviderForStickerConfiguration:(id)arg1 usingService:(bool)arg2;
- (id /* block */)scheduledStickerResourceProviderForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 avatarConfiguration:(id)arg3 stickerConfiguration:(id)arg4;
- (id /* block */)scheduledStickerResourceProviderForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 avatarConfiguration:(id)arg3 stickerConfiguration:(id)arg4 correctClipping:(bool)arg5;
- (id /* block */)scheduledTaskForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* block */)arg4 resourceHandler:(id /* block */)arg5 synchronous:(bool)arg6;
- (void)setParallelizeEncoding:(bool)arg1;
- (void)setUsingService:(bool)arg1;
- (id)stickerGeneratorPool;
- (void)stopUsingResources;
- (bool)usingService;

@end
