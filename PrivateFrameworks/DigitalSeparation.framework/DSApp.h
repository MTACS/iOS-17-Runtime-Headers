
@interface DSApp : NSObject <NSMutableCopying> {
    NSString * _appID;
    NSString * _displayName;
    unsigned long long  _locationAuthorization;
    NSMutableSet * _permissionsGranted;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) unsigned long long locationAuthorization;
@property (nonatomic, retain) NSMutableSet *permissionsGranted;

+ (bool)app:(id)arg1 hasPermission:(id)arg2;
+ (bool)app:(id)arg1 hasPermissionAcceptingAnyLocationAuthorization:(id)arg2;
+ (bool)appHasNoPermissions:(id)arg1;
+ (bool)skipTCCCheck:(id)arg1;

- (void).cxx_destruct;
- (id)appID;
- (long long)compare:(id)arg1;
- (id)displayName;
- (bool)hasLocationAccess;
- (unsigned long long)locationAuthorization;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)permissionsGranted;
- (void)setAppID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLocationAuthorization:(unsigned long long)arg1;
- (void)setPermissionsGranted:(id)arg1;

@end
