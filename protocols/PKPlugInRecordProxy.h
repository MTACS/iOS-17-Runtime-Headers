
@protocol PKPlugInRecordProxy <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSString *)bundleVersion;
- (<PKPlugInProxy> *)compatibilityObject;
- (<PKPropertyList> *)entitlements;
- (NSString *)localizedName;
- (NSString *)localizedShortName;
- (NSUUID *)uniqueIdentifier;

@end
