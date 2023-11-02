
@protocol MKHTTPServerDelegate <NSObject>

@required

- (void)server:(MKHTTPServer *)arg1 didOpen:(long long)arg2;
- (void)serverDidCancel:(MKHTTPServer *)arg1;

@end
