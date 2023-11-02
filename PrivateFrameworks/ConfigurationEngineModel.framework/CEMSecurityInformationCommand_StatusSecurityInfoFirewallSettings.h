
@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase {
    NSArray * _statusApplications;
    NSNumber * _statusBlockAllIncoming;
    NSNumber * _statusFirewallEnabled;
    NSNumber * _statusStealthMode;
}

@property (nonatomic, copy) NSArray *statusApplications;
@property (nonatomic, copy) NSNumber *statusBlockAllIncoming;
@property (nonatomic, copy) NSNumber *statusFirewallEnabled;
@property (nonatomic, copy) NSNumber *statusStealthMode;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithFirewallEnabled:(id)arg1 withBlockAllIncoming:(id)arg2 withStealthMode:(id)arg3 withApplications:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusApplications:(id)arg1;
- (void)setStatusBlockAllIncoming:(id)arg1;
- (void)setStatusFirewallEnabled:(id)arg1;
- (void)setStatusStealthMode:(id)arg1;
- (id)statusApplications;
- (id)statusBlockAllIncoming;
- (id)statusFirewallEnabled;
- (id)statusStealthMode;

@end
