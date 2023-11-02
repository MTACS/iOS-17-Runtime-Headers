
@interface MTExtensionPlaybackController : NSObject {
    NSMutableArray * _magicMomentCompletionHandlers;
}

@property (nonatomic, retain) NSMutableArray *magicMomentCompletionHandlers;

+ (void)_setPlaybackQueueWithIdentifier:(id)arg1 startPlayback:(bool)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 playerID:(id)arg6 mrCompletion:(id /* block */)arg7;
+ (void)getNowPlayingInfoForMagicMomentInfoCenterWithCompletion:(id /* block */)arg1;
+ (struct _MRSystemAppPlaybackQueue { }*)playbackQueueForIdentifier:(id)arg1 startPlayback:(bool)arg2 assetInfo:(id)arg3;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 mrCompletion:(id /* block */)arg5;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(id /* block */)arg2;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)arg1 startPlayback:(bool)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 completion:(id /* block */)arg6;
+ (void)setQueueWithPlaybackRequestIdentifier:(id)arg1 startPlayback:(bool)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 mrCompletion:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_getNowPlayingInfoAndCallPendingCompletions;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (id)init;
- (id)magicMomentCompletionHandlers;
- (void)populateMagicMomentInfoCenterWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(id /* block */)arg2;
- (void)setMagicMomentCompletionHandlers:(id)arg1;

@end
