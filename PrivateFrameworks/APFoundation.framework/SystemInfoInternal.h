
@interface SystemInfoInternal : NSObject

+ (id)bundleIdentifier;
+ (id)deviceModel;
+ (id)locale;
+ (id)longBuildVersion;
+ (id)modelType;
+ (id)osIdentifier;
+ (id)osName;
+ (id)osVersion;
+ (id)shortBuildVersion;
+ (id)systemDescription;

- (void).cxx_destruct;
- (id)init;

@end
