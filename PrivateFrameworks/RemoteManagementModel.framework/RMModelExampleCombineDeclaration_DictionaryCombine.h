
@interface RMModelExampleCombineDeclaration_DictionaryCombine : RMModelPayloadBase {
    NSString * _payloadEnumHighest;
    NSNumber * _payloadNumberMin;
}

@property (nonatomic, copy) NSString *payloadEnumHighest;
@property (nonatomic, copy) NSNumber *payloadNumberMin;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithNumberMin:(id)arg1 enumHighest:(id)arg2;

- (void).cxx_destruct;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEnumHighest;
- (id)payloadNumberMin;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadEnumHighest:(id)arg1;
- (void)setPayloadNumberMin:(id)arg1;

@end
