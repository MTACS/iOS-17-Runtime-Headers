
@interface PXStoryPhotoKitMusicCurationProvider : NSObject <PXStoryMusicCurationProvider> {
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSMutableDictionary * _stateQueue_cache;
    NSArray * _stateQueue_recentlyUsedAppleMusicSongIDs;
    NSArray * _stateQueue_recentlyUsedFlexSongIDs;
    NSMutableDictionary * _stateQueue_requests;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSArray *recentlyUsedAppleMusicSongIDs;
@property (nonatomic, retain) NSArray *recentlyUsedFlexSongIDs;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic, readonly) NSMutableDictionary *stateQueue_cache;
@property (nonatomic, retain) NSArray *stateQueue_recentlyUsedAppleMusicSongIDs;
@property (nonatomic, retain) NSArray *stateQueue_recentlyUsedFlexSongIDs;
@property (nonatomic, readonly) NSMutableDictionary *stateQueue_requests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedResultForAssetCollection:(id)arg1 options:(id)arg2;
- (void)_handleMusicCurationResult:(id)arg1 forAssetCollection:(id)arg2 options:(id)arg3;
- (id)_performRequestForAssetCollection:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)_removeRejectedSong:(id)arg1 fromCachedResultForAssetCollection:(id)arg2;
- (void)_replaceSongWithSong:(id)arg1 inCachedResultForAssetCollection:(id)arg2;
- (void)_saveNegativeFeedbackForSongIdentifier:(id)arg1 memory:(id)arg2;
- (void)applyNegativeFeedbackToSong:(id)arg1 forMemory:(id)arg2;
- (id)init;
- (id)log;
- (id)recentlyUsedAppleMusicSongIDs;
- (id)recentlyUsedFlexSongIDs;
- (id)requestMusicCurationForAssetCollection:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)setRecentlyUsedAppleMusicSongIDs:(id)arg1;
- (void)setRecentlyUsedFlexSongIDs:(id)arg1;
- (void)setStateQueue_recentlyUsedAppleMusicSongIDs:(id)arg1;
- (void)setStateQueue_recentlyUsedFlexSongIDs:(id)arg1;
- (id)stateQueue;
- (id)stateQueue_cache;
- (id)stateQueue_recentlyUsedAppleMusicSongIDs;
- (id)stateQueue_recentlyUsedFlexSongIDs;
- (id)stateQueue_requests;
- (void)updateAudioAsset:(id)arg1 forAssetCollection:(id)arg2;
- (id)workQueue;

@end
