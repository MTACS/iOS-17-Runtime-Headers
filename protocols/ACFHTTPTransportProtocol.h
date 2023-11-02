
@protocol ACFHTTPTransportProtocol <NSObject>

@required

- (void)cancelRequest;
- (NSDictionary *)httpGETParameters;
- (NSDictionary *)httpHeader;
- (NSString *)httpMethod;
- (NSData *)httpPOSTBody;
- (bool)isCanceled;
- (void)performRequestWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSData *, NSError *, void*
- (NSString *)requestURLTemplate;
- (id /* block */)retryCheckBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSData *, NSError *, void*, id, SEL
- (NSArray *)serverAttemptsDelays;
- (NSArray *)serverHosts;
- (void)setHttpGETParameters:(NSDictionary *)arg1;
- (void)setHttpHeader:(NSDictionary *)arg1;
- (void)setHttpMethod:(NSString *)arg1;
- (void)setHttpPOSTBody:(NSData *)arg1;
- (void)setIsCanceled:(bool)arg1;
- (void)setRequestURLTemplate:(NSString *)arg1;
- (void)setRetryCheckBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSData *, NSError *, void*
- (void)setServerAttemptsDelays:(NSArray *)arg1;
- (void)setServerHosts:(NSArray *)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
