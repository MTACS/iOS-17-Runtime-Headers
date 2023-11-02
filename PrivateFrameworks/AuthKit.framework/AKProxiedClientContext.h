
@interface AKProxiedClientContext : NSObject {
    NSString * _appID;
    NSString * _appName;
    NSArray * _associatedDomains;
    NSString * _bundleID;
    NSString * _deviceClass;
    NSString * _deviceName;
    bool  _isRapportLogin;
    bool  _shouldSkipAuthorizationUI;
    NSString * _teamID;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) bool isRapportLogin;
@property (nonatomic) bool shouldSkipAuthorizationUI;
@property (nonatomic, copy) NSString *teamID;

- (void).cxx_destruct;
- (id)appID;
- (id)appName;
- (id)associatedDomains;
- (id)bundleID;
- (id)deviceClass;
- (id)deviceName;
- (bool)isRapportLogin;
- (void)setAppID:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIsRapportLogin:(bool)arg1;
- (void)setShouldSkipAuthorizationUI:(bool)arg1;
- (void)setTeamID:(id)arg1;
- (bool)shouldSkipAuthorizationUI;
- (id)teamID;

@end
