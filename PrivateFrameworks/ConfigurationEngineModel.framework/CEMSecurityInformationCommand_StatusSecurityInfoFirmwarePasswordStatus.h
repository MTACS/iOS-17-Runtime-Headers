
@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase {
    NSNumber * _statusAllowOroms;
    NSNumber * _statusChangePending;
    NSNumber * _statusPasswordExists;
}

@property (nonatomic, copy) NSNumber *statusAllowOroms;
@property (nonatomic, copy) NSNumber *statusChangePending;
@property (nonatomic, copy) NSNumber *statusPasswordExists;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusAllowOroms:(id)arg1;
- (void)setStatusChangePending:(id)arg1;
- (void)setStatusPasswordExists:(id)arg1;
- (id)statusAllowOroms;
- (id)statusChangePending;
- (id)statusPasswordExists;

@end
