
@interface CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo : CEMPayloadBase {
    NSString * _statusOrganizationAddress;
    NSString * _statusOrganizationEmail;
    NSString * _statusOrganizationMagic;
    NSString * _statusOrganizationName;
    NSString * _statusOrganizationPhone;
}

@property (nonatomic, copy) NSString *statusOrganizationAddress;
@property (nonatomic, copy) NSString *statusOrganizationEmail;
@property (nonatomic, copy) NSString *statusOrganizationMagic;
@property (nonatomic, copy) NSString *statusOrganizationName;
@property (nonatomic, copy) NSString *statusOrganizationPhone;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithOrganizationName:(id)arg1;
+ (id)buildWithOrganizationName:(id)arg1 withOrganizationAddress:(id)arg2 withOrganizationPhone:(id)arg3 withOrganizationEmail:(id)arg4 withOrganizationMagic:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusOrganizationAddress:(id)arg1;
- (void)setStatusOrganizationEmail:(id)arg1;
- (void)setStatusOrganizationMagic:(id)arg1;
- (void)setStatusOrganizationName:(id)arg1;
- (void)setStatusOrganizationPhone:(id)arg1;
- (id)statusOrganizationAddress;
- (id)statusOrganizationEmail;
- (id)statusOrganizationMagic;
- (id)statusOrganizationName;
- (id)statusOrganizationPhone;

@end
