
@interface CEMSecurityInformationCommand_Status : CEMPayloadBase {
    CEMSecurityInformationCommand_StatusSecurityInfo * _statusSecurityInfo;
}

@property (nonatomic, copy) CEMSecurityInformationCommand_StatusSecurityInfo *statusSecurityInfo;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithSecurityInfo:(id)arg1;
+ (id)buildWithSecurityInfo:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusSecurityInfo:(id)arg1;
- (id)statusSecurityInfo;

@end
