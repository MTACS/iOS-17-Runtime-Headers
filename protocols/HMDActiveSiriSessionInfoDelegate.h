
@protocol HMDActiveSiriSessionInfoDelegate

@required

- (void)activeSiriSession:(HMDActiveSiriSessionInfo *)arg1 didCreateAudioFrame:(NSData *)arg2 sequenceNumber:(NSNumber *)arg3 gain:(NSNumber *)arg4;
- (void)activeSiriSession:(HMDActiveSiriSessionInfo *)arg1 didReceiveButtonUpWithDuration:(NSNumber *)arg2;
- (void)activeSiriSession:(HMDActiveSiriSessionInfo *)arg1 didReceiveFirstPassMetadata:(NSDictionary *)arg2;
- (void)activeSiriSessionDidStop:(HMDActiveSiriSessionInfo *)arg1;

@end
