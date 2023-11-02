
@protocol SYUserActivityInfo <NSObject>

@required

- (NSString *)activityType;
- (NSURL *)canonicalURL;
- (NSString *)persistentIdentifier;
- (NSString *)targetContentIdentifier;
- (NSURL *)webpageURL;

@end
