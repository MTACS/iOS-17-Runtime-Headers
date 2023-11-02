
@protocol SBFSensorActivityAttribution <NSObject, NSCopying>

@required

- (NSString *)activeEntityBundleIdentifier;
- (NSString *)attributionGroup;
- (NSString *)bundleIdentifier;
- (NSString *)displayName;
- (NSString *)executableDisplayName;
- (bool)isSystemService;
- (long long)sensor;
- (bool)usedRecently;
- (NSString *)website;

@end
