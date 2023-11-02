
@interface RMModelPasscodeSettingsDeclaration_CustomRegex : RMModelPayloadBase {
    RMModelPasscodeSettingsDeclaration_CustomRegexDescription * _payloadDescription;
    NSString * _payloadRegex;
}

@property (nonatomic, copy) RMModelPasscodeSettingsDeclaration_CustomRegexDescription *payloadDescription;
@property (nonatomic, copy) NSString *payloadRegex;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithRegex:(id)arg1;
+ (id)buildWithRegex:(id)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadDescription;
- (id)payloadRegex;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadRegex:(id)arg1;

@end
