
@protocol _INPBBuildId <NSObject>

@required

- (NSString *)buildNumber;
- (bool)hasBuildNumber;
- (bool)hasVersionNumber;
- (void)setBuildNumber:(NSString *)arg1;
- (void)setVersionNumber:(NSString *)arg1;
- (NSString *)versionNumber;

@end
