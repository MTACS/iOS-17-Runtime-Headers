
@protocol HMDDataStreamProtocol <NSObject>

@required

- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didFailWithError:(NSError *)arg2;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveEvent:(NSString *)arg2 header:(NSDictionary *)arg3 payload:(NSDictionary *)arg4;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveRequest:(NSString *)arg2 header:(NSDictionary *)arg3 payload:(NSDictionary *)arg4;
- (void)dataStream:(id <HMDDataStreamProtocolDelegate>)arg1 didReceiveResponse:(NSString *)arg2 header:(NSDictionary *)arg3 payload:(NSDictionary *)arg4;
- (void)dataStreamDidClose:(id <HMDDataStreamProtocolDelegate>)arg1;
- (void)dataStreamDidOpen:(id <HMDDataStreamProtocolDelegate>)arg1;
- (void)dataStreamInitiatedClose:(id <HMDDataStreamProtocolDelegate>)arg1;
- (bool)isActive;

@end
