
@protocol MKHTTPRouter <NSObject>

@required

- (void)server:(MKHTTPServer *)arg1 didReceiveRequest:(MKHTTPRequest *)arg2 response:(MKHTTPResponse *)arg3;

@end
