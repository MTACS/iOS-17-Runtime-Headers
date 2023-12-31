
@protocol WKURLSchemeTask <NSObject>

@required

- (void)didFailWithError:(NSError *)arg1;
- (void)didFinish;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSURLResponse *)arg1;
- (NSURLRequest *)request;

@end
