
@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS

- (int)createVFD:(int*)arg1 forStreamType:(unsigned int)arg2;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (id)initWithNotificationQueue:(id)arg1 reportingAgent:(struct opaqueRTCReporting { }*)arg2;
- (int)onStart;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { }*)arg1;

@end
