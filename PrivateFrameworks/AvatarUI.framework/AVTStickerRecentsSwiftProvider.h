
@interface AVTStickerRecentsSwiftProvider : NSObject <AVTStickerBackendDelegate> {
    <AVTAvatarStoreInternal> * _avatarStore;
    <NSObject> * _avatarStoreChangeObserver;
    <AVTResourceCache> * _cache;
    AVTStickerConfigurationProvider * _configurationProvider;
    <AVTAvatarRecord> * _defaultMemoji;
    <AVTStickerRecentsSwiftProviderDelegate> * _delegate;
    NSArray * _displayItems;
    NSObject<OS_dispatch_queue> * _encodingQueue;
    AVTUIEnvironment * _environment;
    AVTUIStickerGeneratorPool * _generatorPool;
    bool  _hasFetchedDefaultMemoji;
    AVTClippableImageStore * _imageStore;
    long long  _recentsRequestedCount;
    NSObject<OS_dispatch_queue> * _recentsWorkQueue;
    NSObject<OS_dispatch_queue> * _renderingQueue;
    AVTStickerGenerator * _stickerGenerator;
    AVTStickerRecentsLayout * _stickerRecentsLayout;
    AVTStickerRecentsMigrator * _stickerRecentsMigrator;
    AVTSerialTaskScheduler * _taskScheduler;
}

@property (nonatomic, readonly) <AVTAvatarStoreInternal> *avatarStore;
@property (nonatomic, retain) <NSObject> *avatarStoreChangeObserver;
@property (nonatomic, readonly) <AVTResourceCache> *cache;
@property (nonatomic, retain) AVTStickerConfigurationProvider *configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <AVTAvatarRecord> *defaultMemoji;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayItems;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *encodingQueue;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) AVTUIStickerGeneratorPool *generatorPool;
@property (nonatomic) bool hasFetchedDefaultMemoji;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTClippableImageStore *imageStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recentsWorkQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *renderingQueue;
@property (nonatomic, readonly) AVTStickerGenerator *stickerGenerator;
@property (nonatomic, readonly) AVTStickerRecentsLayout *stickerRecentsLayout;
@property (nonatomic, retain) AVTStickerRecentsMigrator *stickerRecentsMigrator;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVTSerialTaskScheduler *taskScheduler;

+ (id)imageStoreWithEnvironment:(id)arg1;
+ (id)stickerCacheWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyStoreChanged;
- (id)avatarStore;
- (id)avatarStoreChangeObserver;
- (void)beginObservingAvatarStoreChanges;
- (id)cache;
- (id)configurationProvider;
- (void)dealloc;
- (id)defaultMemoji;
- (id)displayItems;
- (id)encodingQueue;
- (void)endObservingAvatarStoreChanges;
- (id)environment;
- (void)fetchDefaultMemojiIfNeeded;
- (id)fetchRecents:(long long)arg1 excludingStickersMatchingRules:(id)arg2;
- (id)generatorPool;
- (bool)hasFetchedDefaultMemoji;
- (id)imageStore;
- (id)initWithDelegate:(id)arg1;
- (void)recentStickersDidChange:(id)arg1;
- (id)recentsWorkQueue;
- (id)renderingQueue;
- (void)setAvatarStoreChangeObserver:(id)arg1;
- (void)setConfigurationProvider:(id)arg1;
- (void)setDefaultMemoji:(id)arg1;
- (void)setDisplayItems:(id)arg1;
- (void)setEncodingQueue:(id)arg1;
- (void)setGeneratorPool:(id)arg1;
- (void)setHasFetchedDefaultMemoji:(bool)arg1;
- (void)setImageStore:(id)arg1;
- (void)setRecentsWorkQueue:(id)arg1;
- (void)setRenderingQueue:(id)arg1;
- (void)setStickerRecentsMigrator:(id)arg1;
- (void)setTaskScheduler:(id)arg1;
- (id)stickerGenerator;
- (id)stickerRecentsLayout;
- (id)stickerRecentsMigrator;
- (id)taskScheduler;

@end
