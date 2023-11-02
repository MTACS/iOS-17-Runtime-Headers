
@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase {
    CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary * _statusIntersection;
    CEMDeviceListRestrictionsCommand_StatusBooleanDictionary * _statusRestrictedBool;
    CEMDeviceListRestrictionsCommand_StatusValueDictionary * _statusRestrictedValue;
    CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary * _statusUnion;
}

@property (nonatomic, copy) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusIntersection;
@property (nonatomic, copy) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *statusRestrictedBool;
@property (nonatomic, copy) CEMDeviceListRestrictionsCommand_StatusValueDictionary *statusRestrictedValue;
@property (nonatomic, copy) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusUnion;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRestrictedBool:(id)arg1 withRestrictedValue:(id)arg2 withIntersection:(id)arg3 withUnion:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusIntersection:(id)arg1;
- (void)setStatusRestrictedBool:(id)arg1;
- (void)setStatusRestrictedValue:(id)arg1;
- (void)setStatusUnion:(id)arg1;
- (id)statusIntersection;
- (id)statusRestrictedBool;
- (id)statusRestrictedValue;
- (id)statusUnion;

@end
