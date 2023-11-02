
@interface _AVTAvatarRecordImageProvider : NSObject {
    bool  _allowPreFlight;
    AVTAvatarImageRenderer * _avatarRenderer;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AVTAvatarConfigurationImageRenderer * _configurationRenderer;
    AVTUIEnvironment * _environment;
    <AVTUILogger> * _logger;
    <AVTImageCache> * _peristentCache;
    <AVTTaskScheduler> * _renderingScheduler;
    <AVTImageCache> * _volatileCache;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) bool allowPreFlight;
@property (nonatomic, readonly) AVTAvatarImageRenderer *avatarRenderer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *configurationRenderer;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTImageCache> *peristentCache;
@property (nonatomic, readonly) <AVTTaskScheduler> *renderingScheduler;
@property (nonatomic, readonly) <AVTImageCache> *volatileCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)makePersistentImageCache:(out id*)arg1 volatileImageCache:(out id*)arg2 withEnvironment:(id)arg3;

- (void).cxx_destruct;
- (id /* block */)_providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(bool)arg4;
- (id /* block */)_providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(bool)arg4 usingService:(bool)arg5;
- (id /* block */)_providerForRecord:(id)arg1 scope:(id)arg2;
- (bool)allowPreFlight;
- (id)avatarRenderer;
- (id)callbackQueue;
- (id)configurationRenderer;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 taskScheduler:(id)arg2;
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 allowPreFlight:(bool)arg3 taskScheduler:(id)arg4 environment:(id)arg5;
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 configurationRenderer:(id)arg5 avatarRenderer:(id)arg6 taskScheduler:(id)arg7 allowPreFlight:(bool)arg8 environment:(id)arg9;
- (id)logger;
- (id)peristentCache;
- (id /* block */)providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(bool)arg4;
- (id /* block */)providerForRecord:(id)arg1 scope:(id)arg2;
- (id /* block */)providerForRecord:(id)arg1 scope:(id)arg2 usingService:(bool)arg3;
- (id)renderingScheduler;
- (id)volatileCache;
- (id)workQueue;

@end
