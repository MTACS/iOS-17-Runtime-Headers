
@interface CEMDeviceListRestrictionsCommand_StatusValueDictionary : CEMPayloadBase {
    NSDictionary * _statusANY;
}

@property (nonatomic, copy) NSDictionary *statusANY;

+ (id)allowedStatusKeys;
+ (id)build;
+ (id)buildRequiredOnly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusANY:(id)arg1;
- (id)statusANY;

@end
