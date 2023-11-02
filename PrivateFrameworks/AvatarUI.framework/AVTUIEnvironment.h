
@interface AVTUIEnvironment : NSObject {
    double  _actionAnimationsMultiplier;
    NSObject<OS_dispatch_queue> * _backgroundEncodingQueue;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _backgroundRenderingQueue;
    AVTCoreEnvironment * _coreEnvironment;
    bool  _deviceIsMac;
    bool  _deviceIsPad;
    AVTDeviceResourceManager * _deviceResourceManager;
    AVTCoreModel * _editorCoreModel;
    AVTMemoji * _editorThumbnailAvatar;
    <AVTImageCache> * _inMemoryImageCache;
    double  _mainScreenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _mainScreenSize;
    unsigned long long  _platform;
    AVTAvatarRemoteImageRenderer * _remoteRenderer;
    AVTAvatarConfigurationImageRenderer * _renderer;
    <AVTUsageTrackingSession> * _usageTrackingSession;
    long long  _userInterfaceLayoutDirection;
}

@property (nonatomic) double actionAnimationsMultiplier;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *backgroundEncodingQueue;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *backgroundRenderingQueue;
@property (nonatomic, readonly) AVTCoreEnvironment *coreEnvironment;
@property (nonatomic, readonly) bool deviceIsMac;
@property (nonatomic, readonly) bool deviceIsPad;
@property (nonatomic, readonly) AVTDeviceResourceManager *deviceResourceManager;
@property (nonatomic, readonly) AVTCoreModel *editorCoreModel;
@property (nonatomic, readonly) AVTMemoji *editorThumbnailAvatar;
@property (nonatomic, readonly, copy) NSURL *imageCacheStoreLocation;
@property (nonatomic, readonly, copy) NSURL *imageStoreLocation;
@property (nonatomic, readonly) <AVTImageCache> *inMemoryImageCache;
@property (nonatomic, readonly, copy) id /* block */ lockProvider;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) double mainScreenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mainScreenSize;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) unsigned long long platform;
@property (nonatomic, readonly) AVTAvatarRemoteImageRenderer *remoteRenderer;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly, copy) id /* block */ serialQueueProvider;
@property (nonatomic, readonly, copy) NSURL *stickerImageStoreLocation;
@property (nonatomic, readonly, copy) NSURL *storeLocation;
@property (nonatomic, readonly) <AVTUsageTrackingSession> *usageTrackingSession;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) long long userInterfaceLayoutDirection;

+ (id)createEditorCoreModelForPlatform:(unsigned long long)arg1 withLogger:(id)arg2;
+ (id)createFunCamEnvironment;
+ (id)createQueueWithQoSClass:(unsigned int)arg1 label:(const char *)arg2;
+ (id)createUsageTrackingSessionWithCoreModel:(id)arg1 serialQueueProvider:(id /* block */)arg2 logger:(id)arg3;
+ (id)defaultEnvironment;

- (void).cxx_destruct;
- (double)actionAnimationsMultiplier;
- (id)backgroundEncodingQueue;
- (id)backgroundQueue;
- (id)backgroundRenderingQueue;
- (id)coreEnvironment;
- (bool)deviceIsMac;
- (bool)deviceIsPad;
- (id)deviceResourceManager;
- (id)editorCoreModel;
- (id)editorThumbnailAvatar;
- (void)flushResourcesForEnteringBackground;
- (id)imageCacheStoreLocation;
- (id)imageStoreLocation;
- (id)inMemoryImageCache;
- (id)initWithCoreEnvironment:(id)arg1;
- (id)initWithCoreEnvironment:(id)arg1 platform:(unsigned long long)arg2;
- (id /* block */)lockProvider;
- (id)logger;
- (double)mainScreenScale;
- (struct CGSize { double x1; double x2; })mainScreenSize;
- (id)notificationCenter;
- (unsigned long long)platform;
- (id)remoteRenderer;
- (id)renderer;
- (id /* block */)serialQueueProvider;
- (void)setActionAnimationsMultiplier:(double)arg1;
- (id)stickerImageStoreLocation;
- (id)storeLocation;
- (id)usageTrackingSession;
- (id)userDefaults;
- (long long)userInterfaceLayoutDirection;

@end
