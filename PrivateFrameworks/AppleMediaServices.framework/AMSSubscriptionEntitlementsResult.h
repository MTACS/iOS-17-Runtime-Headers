
@interface AMSSubscriptionEntitlementsResult : NSObject {
    NSNumber * _appAdamId;
    NSNumber * _appVersion;
    NSDictionary * _entitlements;
    NSDictionary * _serverResponse;
}

@property (nonatomic, retain) NSNumber *appAdamId;
@property (nonatomic, retain) NSNumber *appVersion;
@property (nonatomic, retain) NSDictionary *entitlements;
@property (nonatomic, retain) NSDictionary *serverResponse;

- (void).cxx_destruct;
- (id)appAdamId;
- (id)appVersion;
- (id)entitlements;
- (id)exportObject;
- (bool)isEqual:(id)arg1;
- (id)serverResponse;
- (void)setAppAdamId:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setServerResponse:(id)arg1;

@end
