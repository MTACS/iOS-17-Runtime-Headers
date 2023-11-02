
@interface ATXNotificationsPBAggregateData : PBCodable <NSCopying> {
    int  _appsAllowed;
    int  _appsAllowedThird;
    int  _appsDenied;
    int  _appsDeniedThird;
    int  _appsInstalled;
    int  _appsInstalledThird;
    int  _appsLockscreen;
    int  _appsLockscreenThird;
    struct { 
        unsigned int appsAllowed : 1; 
        unsigned int appsAllowedThird : 1; 
        unsigned int appsDenied : 1; 
        unsigned int appsDeniedThird : 1; 
        unsigned int appsInstalled : 1; 
        unsigned int appsInstalledThird : 1; 
        unsigned int appsLockscreen : 1; 
        unsigned int appsLockscreenThird : 1; 
    }  _has;
}

@property (nonatomic) int appsAllowed;
@property (nonatomic) int appsAllowedThird;
@property (nonatomic) int appsDenied;
@property (nonatomic) int appsDeniedThird;
@property (nonatomic) int appsInstalled;
@property (nonatomic) int appsInstalledThird;
@property (nonatomic) int appsLockscreen;
@property (nonatomic) int appsLockscreenThird;
@property (nonatomic) bool hasAppsAllowed;
@property (nonatomic) bool hasAppsAllowedThird;
@property (nonatomic) bool hasAppsDenied;
@property (nonatomic) bool hasAppsDeniedThird;
@property (nonatomic) bool hasAppsInstalled;
@property (nonatomic) bool hasAppsInstalledThird;
@property (nonatomic) bool hasAppsLockscreen;
@property (nonatomic) bool hasAppsLockscreenThird;

- (int)appsAllowed;
- (int)appsAllowedThird;
- (int)appsDenied;
- (int)appsDeniedThird;
- (int)appsInstalled;
- (int)appsInstalledThird;
- (int)appsLockscreen;
- (int)appsLockscreenThird;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppsAllowed;
- (bool)hasAppsAllowedThird;
- (bool)hasAppsDenied;
- (bool)hasAppsDeniedThird;
- (bool)hasAppsInstalled;
- (bool)hasAppsInstalledThird;
- (bool)hasAppsLockscreen;
- (bool)hasAppsLockscreenThird;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppsAllowed:(int)arg1;
- (void)setAppsAllowedThird:(int)arg1;
- (void)setAppsDenied:(int)arg1;
- (void)setAppsDeniedThird:(int)arg1;
- (void)setAppsInstalled:(int)arg1;
- (void)setAppsInstalledThird:(int)arg1;
- (void)setAppsLockscreen:(int)arg1;
- (void)setAppsLockscreenThird:(int)arg1;
- (void)setHasAppsAllowed:(bool)arg1;
- (void)setHasAppsAllowedThird:(bool)arg1;
- (void)setHasAppsDenied:(bool)arg1;
- (void)setHasAppsDeniedThird:(bool)arg1;
- (void)setHasAppsInstalled:(bool)arg1;
- (void)setHasAppsInstalledThird:(bool)arg1;
- (void)setHasAppsLockscreen:(bool)arg1;
- (void)setHasAppsLockscreenThird:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
