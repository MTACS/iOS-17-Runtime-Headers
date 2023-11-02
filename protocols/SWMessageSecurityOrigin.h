
@protocol SWMessageSecurityOrigin <NSObject>

@required

- (NSString *)host;
- (NSString *)protocol;
- (NSURLRequest *)request;

@end
