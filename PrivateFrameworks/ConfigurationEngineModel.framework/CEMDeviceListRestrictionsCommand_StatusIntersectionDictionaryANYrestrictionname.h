
@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase {
    NSArray * _statusValues;
}

@property (nonatomic, copy) NSArray *statusValues;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithValues:(id)arg1;
+ (id)buildWithValues:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusValues:(id)arg1;
- (id)statusValues;

@end
