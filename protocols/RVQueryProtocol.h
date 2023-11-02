
@protocol RVQueryProtocol <NSObject>

@required

- (NSString *)identifier;
- (long long)queryID;
- (NSString *)title;
- (NSString *)userAgent;

@end
