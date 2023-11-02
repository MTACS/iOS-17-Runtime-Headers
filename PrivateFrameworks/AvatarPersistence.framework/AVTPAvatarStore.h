
@interface AVTPAvatarStore : NSObject <AVTAvatarStore, AVTAvatarStoreInternal, AVTStoreBackendDelegate> {
    <AVTStoreBackend> * _backend;
    NSObject<OS_dispatch_queue> * _backendAccessQueue;
    AVTCoreEnvironment * _environment;
    <AVTPBackendImageHandlingDelegate> * _imageHandlingDelegate;
    <AVTUILogger> * _logger;
    AVTPuppetStore * _puppetStore;
    NSObject<OS_dispatch_queue> * _puppetStoreAccessQueue;
    <AVTStickerBackend> * _stickerBackend;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <AVTStoreBackend> *backend;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backendAccessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AVTPBackendImageHandlingDelegate> *imageHandlingDelegate;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) AVTPuppetStore *puppetStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *puppetStoreAccessQueue;
@property (nonatomic, readonly) <AVTStickerBackend> *stickerBackend;
@property (nonatomic) <AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultBackendWithWorkQueue:(id)arg1 environment:(id)arg2;
+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;

- (void).cxx_destruct;
- (id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)backend;
- (void)backend:(id)arg1 didChangeRecordsWithIdentifiers:(id)arg2;
- (id)backendAccessQueue;
- (bool)canCreateAvatar;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (void)deleteAvatar:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)duplicateAvatar:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)environment;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)imageHandlingDelegate;
- (id)init;
- (id)initWithBackend:(id)arg1 backendAccessQueue:(id)arg2 puppetStore:(id)arg3 stickerBackend:(id)arg4 environment:(id)arg5;
- (id)initWithDomainIdentifier:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)logger;
- (void)performAsynchronousWork:(id /* block */)arg1;
- (void)performBackendWork:(id /* block */)arg1;
- (void)performPuppetStoreWork:(id /* block */)arg1;
- (void)postChangeNotificationForRecordWithIdentifiers:(id)arg1 remote:(bool)arg2;
- (id)puppetStore;
- (id)puppetStoreAccessQueue;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)saveAvatarRecord:(id)arg1 thumbnailAvatar:(id)arg2 completionBlock:(id /* block */)arg3 thumbnailGenerationCompletionBlock:(id /* block */)arg4;
- (void)setImageHandlingDelegate:(id)arg1;
- (void)setStickerBackendDelegate:(id)arg1;
- (id)stickerBackend;
- (id)workQueue;

@end
