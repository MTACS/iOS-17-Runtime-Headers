
@protocol GKSessionVoiceChatDelegate <GKSessionDelegate>

@required

- (void)session:(id)arg1 didReceiveAudioPacket:(NSData *)arg2 fromPeerID:(NSString *)arg3;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(NSString *)arg3;

@end
