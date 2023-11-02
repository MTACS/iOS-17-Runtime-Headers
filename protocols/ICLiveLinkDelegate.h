
@protocol ICLiveLinkDelegate <NSObject>

@optional

- (void)didStartLiveLink:(ICLiveLink *)arg1;
- (void)didStopLiveLink:(ICLiveLink *)arg1;
- (void)liveLink:(ICLiveLink *)arg1 didEncounterError:(NSError *)arg2 willRetry:(bool)arg3;
- (void)liveLink:(ICLiveLink *)arg1 didReceiveDirectCurrentItemChanged:(ICSharedListeningItem *)arg2;
- (void)liveLink:(ICLiveLink *)arg1 didReceiveDirectCurrentItemChanged:(ICSharedListeningItem *)arg2 fromParticipant:(ICLiveLinkIdentity *)arg3;
- (void)liveLink:(ICLiveLink *)arg1 didReceiveEvent:(ICLiveLinkEvent *)arg2;
- (void)liveLink:(ICLiveLink *)arg1 didUpdateParticipants:(NSArray *)arg2;
- (void)liveLink:(ICLiveLink *)arg1 didUpdateQueue:(ICSharedListeningQueue *)arg2;
- (void)liveLinkDidReconnect:(ICLiveLink *)arg1;

@end
