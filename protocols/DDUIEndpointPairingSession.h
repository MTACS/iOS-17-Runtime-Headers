
@protocol DDUIEndpointPairingSession <NSObject>

@required

- (void)cancelWithMessage:(DDUIPairCompleteMessage *)arg1;
- (NSDictionary *)incomingMessage;
- (void)invalidate;
- (<DDUIDevice> *)remoteDevice;
- (NSUUID *)sessionID;
- (unsigned long long)sessionType;
- (void)setIncomingMessage:(NSDictionary *)arg1;
- (void)setSessionType:(unsigned long long)arg1;

@end
