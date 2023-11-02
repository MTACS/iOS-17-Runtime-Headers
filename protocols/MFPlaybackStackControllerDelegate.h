
@protocol MFPlaybackStackControllerDelegate

@required

- (void)currentItemWillChangeFromItem:(id <MFQueuePlayerItem>)arg1 toItem:(id <MFQueuePlayerItem>)arg2 source:(long long)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)didPerformPlayerOperationWithPlayerIdentifier:(NSString *)arg1 items:(NSString *)arg2 operation:(NSString *)arg3;
- (void)didReachEndOfQueueWithReason:(NSString *)arg1;
- (void)didReportSignpostWithType:(long long)arg1;
- (void)errorResolutionDidEndForItem:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2 resolution:(long long)arg3;
- (void)errorResolutionDidStartForItem:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2;
- (void)firstFrameWillRenderForItem:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)interruptionDidBeginWithInterruptor:(NSString *)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)interruptionDidFinishForInterruptor:(NSString *)arg1 shouldResume:(bool)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidBecomeCurrent:(id <MFQueuePlayerItem>)arg1 source:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidFailToLoad:(id <MFQueuePlayerItem>)arg1 silently:(bool)arg2 error:(NSError *)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)itemDidFailToPlayToEnd:(id <MFQueuePlayerItem>)arg1 error:(NSError *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemDidPlayToEnd:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)itemDidResignCurrent:(id <MFQueuePlayerItem>)arg1 source:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)itemIsReadyToPlay:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)itemTransitionDidEndFrom:(id <MFQueuePlayerItem>)arg1 to:(id <MFQueuePlayerItem>)arg2 type:(long long)arg3 duration:(double)arg4 timeStamp:(id <MFTimeStamp>)arg5;
- (void)itemTransitionWillBeginFrom:(id <MFQueuePlayerItem>)arg1 to:(id <MFQueuePlayerItem>)arg2 type:(long long)arg3 duration:(double)arg4 timeStamp:(id <MFTimeStamp>)arg5;
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id <MFQueuePlayerItem>)arg1 timeAtDeath:(double)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id <MFTimeStamp>)arg1;
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id <MFQueuePlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackDidStartForItem:(id <MFQueuePlayerItem>)arg1 rate:(float)arg2 fromStalling:(bool)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)playbackDidStopForItem:(id <MFQueuePlayerItem>)arg1 source:(NSString *)arg2 reason:(NSString *)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)playbackIsBlockedOnNonPlayableItem:(id <MFQueuePlayerItem>)arg1;
- (void)playbackIsLikelyToKeepUp:(bool)arg1 forItem:(id <MFQueuePlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackRateDidChangeNotifiedForItem:(id <MFQueuePlayerItem>)arg1 newRate:(float)arg2 reason:(NSString *)arg3 participantIdentifier:(NSString *)arg4 timeStamp:(id <MFTimeStamp>)arg5;
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id <MFQueuePlayerItem>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id <MFQueuePlayerItem>)arg2 reason:(long long)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)playbackWaitingToPlayForItem:(id <MFQueuePlayerItem>)arg1 reason:(NSString *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)routeDidChange:(bool)arg1 metadata:(id <MFRouteChangeMetadata>)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)screenRecordingDidChange:(bool)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)stackControllerDidCreateTransitionFrom:(id <MFQueuePlayerItem>)arg1 to:(id <MFQueuePlayerItem>)arg2 type:(long long)arg3 parameters:(NSDictionary *)arg4;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(NSString *)arg2 timeStamp:(id <MFTimeStamp>)arg3;
- (void)tracksDidChangeForItem:(id <MFQueuePlayerItem>)arg1 timeStamp:(id <MFTimeStamp>)arg2;
- (void)userActionDidBegin:(id <MFUserAction>)arg1;
- (void)userActionDidEnd:(id <MFUserAction>)arg1 error:(NSError *)arg2;
- (void)userSeekCompletedForItem:(id <MFQueuePlayerItem>)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id <MFTimeStamp>)arg4;
- (void)willPerformPlayerOperationWithPlayerIdentifier:(NSString *)arg1 operation:(NSString *)arg2 reason:(NSString *)arg3;

@end
