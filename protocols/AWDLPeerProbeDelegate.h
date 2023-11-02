
@protocol AWDLPeerProbeDelegate <NSObject>

@optional

- (void)awdlPeerPollProbe:(AWDLPeerProbe *)arg1 serviceAdded:(NSDictionary *)arg2;
- (void)awdlPeerPollProbe:(AWDLPeerProbe *)arg1 serviceRemoved:(NSDictionary *)arg2;
- (void)awdlPeerPollProbe:(AWDLPeerProbe *)arg1 serviceUpdated:(NSDictionary *)arg2;
- (void)awdlPeerPollProbeIsComplete:(AWDLPeerProbe *)arg1;

@end
