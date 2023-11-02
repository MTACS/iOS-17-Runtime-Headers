
@interface DEPDeviceUploadOrganization : NSObject <NSSecureCoding> {
    NSArray * _approvers;
    NSNumber * _deviceAdditionDepEnabledNum;
    NSNumber * _deviceAdditionGbiEnabledNum;
    NSNumber * _idmsRemoveDeviceEnabledNum;
    NSNumber * _idmsWhitelistingEnabledNum;
    NSString * _orgId;
    NSString * _orgName;
    NSNumber * _skipItrackCheckNum;
}

@property (nonatomic, readonly) NSArray *approvers;
@property (nonatomic, readonly) bool deviceAdditionDepEnabled;
@property (nonatomic, retain) NSNumber *deviceAdditionDepEnabledNum;
@property (nonatomic, readonly) bool deviceAdditionGbiEnabled;
@property (nonatomic, retain) NSNumber *deviceAdditionGbiEnabledNum;
@property (nonatomic, readonly) bool idmsRemoveDeviceEnabled;
@property (nonatomic, retain) NSNumber *idmsRemoveDeviceEnabledNum;
@property (nonatomic, readonly) bool idmsWhitelistingEnabled;
@property (nonatomic, retain) NSNumber *idmsWhitelistingEnabledNum;
@property (nonatomic, readonly) NSString *orgId;
@property (nonatomic, readonly) NSString *orgName;
@property (nonatomic, readonly) bool skipItrackCheck;
@property (nonatomic, retain) NSNumber *skipItrackCheckNum;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_approversFromApproversArray:(id)arg1;
- (id)approvers;
- (bool)deviceAdditionDepEnabled;
- (id)deviceAdditionDepEnabledNum;
- (bool)deviceAdditionGbiEnabled;
- (id)deviceAdditionGbiEnabledNum;
- (void)encodeWithCoder:(id)arg1;
- (bool)idmsRemoveDeviceEnabled;
- (id)idmsRemoveDeviceEnabledNum;
- (bool)idmsWhitelistingEnabled;
- (id)idmsWhitelistingEnabledNum;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithOrgId:(id)arg1 orgName:(id)arg2 approvers:(id)arg3 skipItrackCheck:(bool)arg4 deviceAdditionDepEnabled:(bool)arg5 idmsWhitelistingEnabled:(bool)arg6 idmsRemoveDeviceEnabled:(bool)arg7 deviceAdditionGbiEnabled:(bool)arg8;
- (id)orgId;
- (id)orgName;
- (void)setDeviceAdditionDepEnabledNum:(id)arg1;
- (void)setDeviceAdditionGbiEnabledNum:(id)arg1;
- (void)setIdmsRemoveDeviceEnabledNum:(id)arg1;
- (void)setIdmsWhitelistingEnabledNum:(id)arg1;
- (void)setSkipItrackCheckNum:(id)arg1;
- (bool)skipItrackCheck;
- (id)skipItrackCheckNum;

@end
