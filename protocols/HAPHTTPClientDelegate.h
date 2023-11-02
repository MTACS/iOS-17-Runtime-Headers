
@protocol HAPHTTPClientDelegate <NSObject>

@required

- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveEvent:(id)arg2;
- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveSocketEvent:(unsigned long long)arg2;
- (void)httpClientDidCloseConnectionDueToServer:(HAPHTTPClient *)arg1;
- (NSString *)identifier;

@end
