
@protocol NSURLSessionWebSocketDelegate <NSURLSessionTaskDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 webSocketTask:(NSURLSessionWebSocketTask *)arg2 didCloseWithCode:(long long)arg3 reason:(NSData *)arg4;
- (void)URLSession:(NSURLSession *)arg1 webSocketTask:(NSURLSessionWebSocketTask *)arg2 didOpenWithProtocol:(NSString *)arg3;

@end
