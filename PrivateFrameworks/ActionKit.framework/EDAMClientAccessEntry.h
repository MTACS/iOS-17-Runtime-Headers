
@interface EDAMClientAccessEntry : FATObject {
    NSNumber * _accessTime;
    NSNumber * _apiKeyId;
    NSString * _appName;
    NSNumber * _authenticatedClientUserId;
    NSNumber * _browserType;
    NSNumber * _businessAdmin;
    NSString * _deviceName;
    NSString * _ipAddress;
    NSString * _location;
    NSNumber * _longSessionCreated;
    NSNumber * _userId;
}

@property (nonatomic, retain) NSNumber *accessTime;
@property (nonatomic, retain) NSNumber *apiKeyId;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSNumber *authenticatedClientUserId;
@property (nonatomic, retain) NSNumber *browserType;
@property (nonatomic, retain) NSNumber *businessAdmin;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *ipAddress;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSNumber *longSessionCreated;
@property (nonatomic, retain) NSNumber *userId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)accessTime;
- (id)apiKeyId;
- (id)appName;
- (id)authenticatedClientUserId;
- (id)browserType;
- (id)businessAdmin;
- (id)deviceName;
- (id)ipAddress;
- (id)location;
- (id)longSessionCreated;
- (void)setAccessTime:(id)arg1;
- (void)setApiKeyId:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAuthenticatedClientUserId:(id)arg1;
- (void)setBrowserType:(id)arg1;
- (void)setBusinessAdmin:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongSessionCreated:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;

@end
