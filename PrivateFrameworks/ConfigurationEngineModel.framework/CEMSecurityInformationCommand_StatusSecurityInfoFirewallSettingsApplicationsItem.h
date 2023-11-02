
@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase {
    NSNumber * _statusAllowed;
    NSString * _statusBundleID;
    NSString * _statusName;
}

@property (nonatomic, copy) NSNumber *statusAllowed;
@property (nonatomic, copy) NSString *statusBundleID;
@property (nonatomic, copy) NSString *statusName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAllowed:(id)arg1 withBundleID:(id)arg2 withName:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusAllowed:(id)arg1;
- (void)setStatusBundleID:(id)arg1;
- (void)setStatusName:(id)arg1;
- (id)statusAllowed;
- (id)statusBundleID;
- (id)statusName;

@end
