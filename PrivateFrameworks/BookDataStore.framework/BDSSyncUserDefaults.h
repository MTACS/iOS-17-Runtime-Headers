
@interface BDSSyncUserDefaults : NSObject

+ (bool)_isBundleIdentifierInArray:(struct __CFArray { }*)arg1;
+ (bool)_isServiceDisabledAlternative:(struct __CFString { }*)arg1;
+ (bool)_isServiceEnabledAlternative:(struct __CFString { }*)arg1;
+ (void)_setService:(struct __CFString { }*)arg1 enabled:(bool)arg2;
+ (id)_stateForLog;
+ (id)iCloudIdentity;
+ (bool)isCloudKitSyncOptedIn;
+ (bool)isGlobalICloudDriveSyncOptedIn;
+ (bool)isICloudDriveSyncOptedIn;
+ (bool)isSignedIntoICloud;
+ (id)makeOSStateHandler;

@end
