
@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase {
    CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary * _statusGlobalRestrictions;
    CEMDeviceListRestrictionsCommand_StatusProfileRestrictions * _statusProfileRestrictions;
}

@property (nonatomic, copy) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *statusGlobalRestrictions;
@property (nonatomic, copy) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *statusProfileRestrictions;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2;
+ (id)buildWithGlobalRestrictions:(id)arg1 withProfileRestrictions:(id)arg2;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusGlobalRestrictions:(id)arg1;
- (void)setStatusProfileRestrictions:(id)arg1;
- (id)statusGlobalRestrictions;
- (id)statusProfileRestrictions;

@end
