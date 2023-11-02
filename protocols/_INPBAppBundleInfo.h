
@protocol _INPBAppBundleInfo <NSObject>

@required

+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;

- (void)addIntentSupport:(_INPBIntentSupport *)arg1;
- (void)addLocalizedProjects:(_INPBLocalizedProject *)arg1;
- (void)addSupportedPlatforms:(_INPBPlatformSupport *)arg1;
- (_INPBAppId *)appId;
- (_INPBBuildId *)buildId;
- (void)clearIntentSupports;
- (void)clearLocalizedProjects;
- (void)clearSupportedPlatforms;
- (bool)hasAppId;
- (bool)hasBuildId;
- (_INPBIntentSupport *)intentSupportAtIndex:(unsigned long long)arg1;
- (NSArray *)intentSupports;
- (unsigned long long)intentSupportsCount;
- (NSArray *)localizedProjects;
- (_INPBLocalizedProject *)localizedProjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedProjectsCount;
- (void)setAppId:(_INPBAppId *)arg1;
- (void)setBuildId:(_INPBBuildId *)arg1;
- (void)setIntentSupports:(NSArray *)arg1;
- (void)setLocalizedProjects:(NSArray *)arg1;
- (void)setSupportedPlatforms:(NSArray *)arg1;
- (NSArray *)supportedPlatforms;
- (_INPBPlatformSupport *)supportedPlatformsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedPlatformsCount;

@end
