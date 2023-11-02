
@interface RMModelPasscodeSettingsDeclaration_CustomRegexDescription : RMModelPayloadBase {
    NSDictionary * _payloadANY;
}

@property (nonatomic, copy) NSDictionary *payloadANY;

+ (id)allowedPayloadKeys;
+ (id)build;
+ (id)buildRequiredOnly;

- (void).cxx_destruct;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadANY;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadANY:(id)arg1;

@end
