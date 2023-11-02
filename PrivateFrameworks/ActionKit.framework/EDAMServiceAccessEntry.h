
@interface EDAMServiceAccessEntry : FATObject {
    NSNumber * _accessTime;
    NSNumber * _apiKeyId;
    NSNumber * _authenticatedClientUserId;
    NSNumber * _businessAdmin;
    NSString * _serviceName;
    NSNumber * _userId;
}

@property (nonatomic, retain) NSNumber *accessTime;
@property (nonatomic, retain) NSNumber *apiKeyId;
@property (nonatomic, retain) NSNumber *authenticatedClientUserId;
@property (nonatomic, retain) NSNumber *businessAdmin;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSNumber *userId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)accessTime;
- (id)apiKeyId;
- (id)authenticatedClientUserId;
- (id)businessAdmin;
- (id)serviceName;
- (void)setAccessTime:(id)arg1;
- (void)setApiKeyId:(id)arg1;
- (void)setAuthenticatedClientUserId:(id)arg1;
- (void)setBusinessAdmin:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;

@end
