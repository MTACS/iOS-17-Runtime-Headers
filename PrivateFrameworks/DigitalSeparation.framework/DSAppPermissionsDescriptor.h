
@interface DSAppPermissionsDescriptor : NSObject {
    NSString * _localizedDescription;
}

@property (nonatomic, readonly, copy) NSString *localizedDescription;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (id)appsWithPermission:(id)arg1 fromAllApps:(id)arg2;
+ (void)ensureApp:(id)arg1 inSensorDict:(id)arg2;
+ (id)enumerateAppPermissionPairsFromApps:(id)arg1 permissions:(id)arg2;
+ (id)localizedDescriptionFromApps:(id)arg1 permission:(id)arg2;
+ (id)localizedDescriptionFromPermissions:(id)arg1;
+ (id)localizedNameForPermission:(id)arg1;
+ (id)sortSensorDict:(id)arg1;

- (void).cxx_destruct;
- (id)localizedDescription;

// Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI

+ (id)iconAppBundleForPermission:(id)arg1;
+ (id)iconAssetNameForPermission:(id)arg1;
+ (id)iconForPermission:(id)arg1 tableFormat:(bool)arg2;
+ (id)stringKeyForPermission:(id)arg1;

@end
