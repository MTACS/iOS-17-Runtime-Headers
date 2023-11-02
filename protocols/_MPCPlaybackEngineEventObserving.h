
@protocol _MPCPlaybackEngineEventObserving <MPCPlaybackEngineEventObserving>

@optional

- (void)engine:(MPCPlaybackEngine *)arg1 didAchieveLikelyToKeepUpWithItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeAccounts:(NSArray *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeActionAtQueueEnd:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeCurrentItemVariantID:(NSString *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeQueueController:(MPCQueueController *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeQueueWithReason:(NSString *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeToItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didEndPlaybackOfItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didReceivePickedRouteChange:(MPAVRoute *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didResetQueueWithPlaybackContext:(MPPlaybackContext *)arg2 error:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 willChangeToItem:(MPAVItem *)arg2 fromItem:(MPAVItem *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 willRemoveQueueController:(MPCQueueController *)arg2;
- (void)engineDidBlockVocalAttenuation:(MPCPlaybackEngine *)arg1;
- (void)engineDidChangeVocalAttenuationLevel:(MPCPlaybackEngine *)arg1;
- (void)engineDidChangeVocalAttenuationState:(MPCPlaybackEngine *)arg1;
- (void)engineDidEndStateRestoration:(MPCPlaybackEngine *)arg1;
- (void)engineDidLoseMediaServices:(MPCPlaybackEngine *)arg1;
- (void)engineDidResetMediaServices:(MPCPlaybackEngine *)arg1;
- (void)engineDidUnblockVocalAttenuation:(MPCPlaybackEngine *)arg1;
- (void)engineWillBeginStateRestoration:(MPCPlaybackEngine *)arg1;

@end
