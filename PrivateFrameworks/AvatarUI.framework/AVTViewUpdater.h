
@interface AVTViewUpdater : NSObject <SCNSceneRendererDelegate> {
    <AVTAvatarRecord> * _avatarRecord;
    AVTView * _avtView;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    AVTAvatar * _currentAvatar;
    double  _lastUpdateTimestamp;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <AVTUILogger> * _logger;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, readonly) AVTView *avtView;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) AVTAvatar *currentAvatar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAvatarPresentedOnScreenCallbackWithQueue:(id /* block */)arg1 forTimestamp:(double)arg2;
- (id)avatarRecord;
- (id)avtView;
- (id)callbackQueue;
- (id)currentAvatar;
- (id)initWithAVTView:(id)arg1 callbackQueue:(id)arg2 logger:(id)arg3;
- (id)initWithAVTView:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)setAvatarRecord:(id)arg1;
- (void)setAvatarRecord:(id)arg1 avatar:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAvatarRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCurrentAvatar:(id)arg1;
- (void)setStickerConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)willUpdateViewForRecord:(id)arg1 avatar:(id)arg2;

@end
