
@protocol _INPBAppBuild <NSObject>

@required

- (_INPBAppId *)appId;
- (_INPBBuildId *)buildId;
- (bool)hasAppId;
- (bool)hasBuildId;
- (void)setAppId:(_INPBAppId *)arg1;
- (void)setBuildId:(_INPBBuildId *)arg1;

@end
