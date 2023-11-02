
@interface AVTStickerUserDefaultsBackend : NSObject <AVTStickerBackend> {
    NSURL * _cacheLocation;
    unsigned long long  _frequencyCounter;
    <AVTUILogger> * _logger;
    <AVTStickerBackendDelegate> * _stickerBackendDelegate;
    NSMutableArray * _stickers;
    NSUserDefaults * _userDefaults;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSURL *cacheLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long frequencyCounter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic) <AVTStickerBackendDelegate> *stickerBackendDelegate;
@property (nonatomic, retain) NSMutableArray *stickers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_recentStickersChangedExternally;
- (id)addNextFrequencyCountToFrequencySum:(id)arg1;
- (void)addStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (id)cacheLocation;
- (void)dealloc;
- (void)deleteRecentStickersForChangeTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didUseStickerWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchAllStickers;
- (id)fetchMostRecentStickersWithLimit:(unsigned long long)arg1;
- (id)fetchStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (unsigned long long)frequencyCounter;
- (void)getStickersFromUserDefaults;
- (id)initWithWorkQueue:(id)arg1 environment:(id)arg2 userDefaults:(id)arg3;
- (id)logger;
- (id)nextFrequencyCount;
- (id)recentStickersForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)saveStickersToUserDefaults;
- (void)setFrequencyCounter:(unsigned long long)arg1;
- (void)setStickerBackendDelegate:(id)arg1;
- (void)setStickers:(id)arg1;
- (id)stickerBackendDelegate;
- (id)stickers;
- (id)stickersIndexesMatchingAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2;
- (void)updateStickerAtIndex:(unsigned long long)arg1;
- (id)userDefaults;
- (id)workQueue;

@end
