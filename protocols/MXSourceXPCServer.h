
@protocol MXSourceXPCServer

@required

- (void)writeDiagnosticDataWithPayload:(MXSourceXPCPayload *)arg1;
- (void)writeMetricDataWithPayload:(MXSourceXPCPayload *)arg1;

@optional

- (void)deliverDummyPayloadForClient:(NSString *)arg1;

@end
