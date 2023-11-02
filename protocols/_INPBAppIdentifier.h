
@protocol _INPBAppIdentifier <NSObject>

@required

- (NSString *)appName;
- (NSString *)bundleIdentifier;
- (NSString *)bundleVersion;
- (bool)hasAppName;
- (bool)hasBundleIdentifier;
- (bool)hasBundleVersion;
- (void)setAppName:(NSString *)arg1;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setBundleVersion:(NSString *)arg1;

@end
