
@interface AVTUIImageRenderService : NSObject <AVTUIImageRenderServiceProtocol> {
    long long  _activeTransactionCount;
    id /* block */  _cleanupBlock;
    AVTClippableImageStore * _clippableImageStore;
    AVTAvatarRecord * _currentAvatarRecord;
    AVTUIStickerRenderer * _currentStickerRenderer;
    AVTUIEnvironment * _environment;
    AVTUIStickerGeneratorPool * _generatorPool;
    AVTImageStore * _imageStore;
    <AVTUILogger> * _logger;
    <AVTTaskScheduler> * _taskScheduler;
    NSObject<OS_os_transaction> * _transaction;
    NSLock * _transactionCountLock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) long long activeTransactionCount;
@property (nonatomic) id /* block */ cleanupBlock;
@property (nonatomic, readonly) AVTClippableImageStore *clippableImageStore;
@property (nonatomic, retain) AVTAvatarRecord *currentAvatarRecord;
@property (nonatomic, retain) AVTUIStickerRenderer *currentStickerRenderer;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) AVTUIStickerGeneratorPool *generatorPool;
@property (nonatomic, readonly) AVTImageStore *imageStore;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTTaskScheduler> *taskScheduler;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, retain) NSLock *transactionCountLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_generateAndCacheImageForAvatarRecord:(id)arg1 scope:(id)arg2 withReply:(id /* block */)arg3;
- (void)_lock_beginCleanupTimer;
- (void)_lock_invalidateCleanupTimer;
- (void)_requestAnimojiStickerImageForAvatarRecord:(id)arg1 withStickerPackName:(id)arg2 stickerConfigurationName:(id)arg3 resource:(id)arg4 withReply:(id /* block */)arg5;
- (void)_requestImageForAvatar:(id)arg1 scope:(id)arg2 withModifications:(id)arg3 withReply:(id /* block */)arg4;
- (void)_requestImageForAvatar:(id)arg1 scope:(id)arg2 withReply:(id /* block */)arg3;
- (void)_requestStickerImageForAvatarRecord:(id)arg1 withStickerPackName:(id)arg2 stickerConfigurationName:(id)arg3 resource:(id)arg4 withReply:(id /* block */)arg5;
- (long long)activeTransactionCount;
- (id /* block */)cleanupBlock;
- (id)clippableImageStore;
- (id)currentAvatarRecord;
- (id)currentStickerRenderer;
- (void)dealloc;
- (id)environment;
- (void)exit;
- (void)generateAndCacheImageForAvatarRecord:(id)arg1 scope:(id)arg2 withReply:(id /* block */)arg3;
- (id)generatorPool;
- (id)imageStore;
- (id)init;
- (id)logger;
- (void)requestAnimojiStickerImageForAvatarRecord:(id)arg1 withStickerPackName:(id)arg2 stickerConfigurationName:(id)arg3 resource:(id)arg4 withReply:(id /* block */)arg5;
- (void)requestImageForAvatar:(id)arg1 scope:(id)arg2 withModifications:(id)arg3 withReply:(id /* block */)arg4;
- (void)requestImageForAvatar:(id)arg1 scope:(id)arg2 withReply:(id /* block */)arg3;
- (void)requestStickerImageForAvatarRecord:(id)arg1 withStickerPackName:(id)arg2 stickerConfigurationName:(id)arg3 resource:(id)arg4 withReply:(id /* block */)arg5;
- (void)setActiveTransactionCount:(long long)arg1;
- (void)setCleanupBlock:(id /* block */)arg1;
- (void)setCurrentAvatarRecord:(id)arg1;
- (void)setCurrentStickerRenderer:(id)arg1;
- (void)setGeneratorPool:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransactionCountLock:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)taskScheduler;
- (id)transaction;
- (void)transactionAdded;
- (void)transactionCompleted;
- (id)transactionCountLock;
- (id)workQueue;

@end
