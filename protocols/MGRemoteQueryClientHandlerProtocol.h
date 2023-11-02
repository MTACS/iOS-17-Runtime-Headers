
@protocol MGRemoteQueryClientHandlerProtocol <NSObject>

@required

- (NSError *)handleCompleteResponse:(NSHTTPURLResponse *)arg1 jsonPayload:(NSObject<MGRemoteQueryEncodable> *)arg2;
- (void)prepareURL:(NSURLComponents *)arg1;

@optional

- (void)prepareRequest:(NSMutableURLRequest *)arg1;
- (bool)validateResponse:(NSHTTPURLResponse *)arg1;

@end
