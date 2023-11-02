
@protocol LNStaticDeferredLocalizedString <NSObject>

@required

- (NSURL *)bundleURL;
- (NSString *)defaultValue;
- (NSString *)key;
- (NSString *)table;

@end
