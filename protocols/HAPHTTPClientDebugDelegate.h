
@protocol HAPHTTPClientDebugDelegate <NSObject>

@required

- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveHTTPMessageWithHeaders:(NSData *)arg2 body:(NSData *)arg3;
- (void)httpClient:(HAPHTTPClient *)arg1 willSendHTTPMessageWithHeaders:(NSData *)arg2 body:(NSData *)arg3;

@end
