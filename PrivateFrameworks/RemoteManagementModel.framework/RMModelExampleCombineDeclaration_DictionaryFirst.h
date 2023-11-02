
@interface RMModelExampleCombineDeclaration_DictionaryFirst : RMModelPayloadBase {
    NSString * _payloadEnum;
    NSNumber * _payloadNumber;
}

@property (nonatomic, copy) NSString *payloadEnum;
@property (nonatomic, copy) NSNumber *payloadNumber;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithNumber:(id)arg1 enum:(id)arg2;

- (void).cxx_destruct;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEnum;
- (id)payloadNumber;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadEnum:(id)arg1;
- (void)setPayloadNumber:(id)arg1;

@end
