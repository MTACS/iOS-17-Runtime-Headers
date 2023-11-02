
@protocol VCMediaStreamProtocol <NSObject>

@required

- (NSError *)setPause:(bool)arg1;
- (bool)setStreamConfig:(NSArray *)arg1 withError:(id*)arg2;
- (NSError *)start;
- (NSError *)stop;

@optional

- (void)setDecryptionTimeOutEnabled:(bool)arg1;
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (void)setJitterBufferMode:(int)arg1;
- (NSDictionary *)setLocalParticipantInfo:(NSDictionary *)arg1 networkSockets:(NSObject<OS_xpc_object> *)arg2 withError:(id*)arg3;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setStreamDirection:(long long)arg1;
- (NSDictionary *)setupRTPWithIDSDestination:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)setupRTPWithSocketDictionary:(NSObject<OS_xpc_object> *)arg1 error:(id*)arg2;
- (long long)streamDirection;

@end
