
@protocol JXHTTPRequestBody <JXHTTPOperationDelegate>

@required

- (long long)httpContentLength;
- (NSString *)httpContentType;
- (NSInputStream *)httpInputStream;

@end
