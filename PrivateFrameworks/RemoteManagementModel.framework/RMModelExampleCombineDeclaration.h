
@interface RMModelExampleCombineDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSArray * _payloadArrayAppend;
    NSNumber * _payloadBooleanAnd;
    NSNumber * _payloadBooleanOr;
    RMModelExampleCombineDeclaration_DictionaryCombine * _payloadDictionaryCombine;
    RMModelExampleCombineDeclaration_DictionaryFirst * _payloadDictionaryFirst;
    NSString * _payloadEnumHighest;
    NSString * _payloadEnumLowest;
    NSString * _payloadFirstString;
    NSNumber * _payloadNumberMax;
    NSNumber * _payloadNumberMin;
    NSArray * _payloadSetIntersection;
    NSArray * _payloadSetUnion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadArrayAppend;
@property (nonatomic, copy) NSNumber *payloadBooleanAnd;
@property (nonatomic, copy) NSNumber *payloadBooleanOr;
@property (nonatomic, copy) RMModelExampleCombineDeclaration_DictionaryCombine *payloadDictionaryCombine;
@property (nonatomic, copy) RMModelExampleCombineDeclaration_DictionaryFirst *payloadDictionaryFirst;
@property (nonatomic, copy) NSString *payloadEnumHighest;
@property (nonatomic, copy) NSString *payloadEnumLowest;
@property (nonatomic, copy) NSString *payloadFirstString;
@property (nonatomic, copy) NSNumber *payloadNumberMax;
@property (nonatomic, copy) NSNumber *payloadNumberMin;
@property (nonatomic, copy) NSArray *payloadSetIntersection;
@property (nonatomic, copy) NSArray *payloadSetUnion;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 booleanOr:(id)arg2 booleanAnd:(id)arg3 numberMin:(id)arg4 numberMax:(id)arg5 enumLowest:(id)arg6 enumHighest:(id)arg7 firstString:(id)arg8 arrayAppend:(id)arg9 setUnion:(id)arg10 setIntersection:(id)arg11 dictionaryFirst:(id)arg12 dictionaryCombine:(id)arg13;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (void)combineWithOther:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadArrayAppend;
- (id)payloadBooleanAnd;
- (id)payloadBooleanOr;
- (id)payloadDictionaryCombine;
- (id)payloadDictionaryFirst;
- (id)payloadEnumHighest;
- (id)payloadEnumLowest;
- (id)payloadFirstString;
- (id)payloadNumberMax;
- (id)payloadNumberMin;
- (id)payloadSetIntersection;
- (id)payloadSetUnion;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadArrayAppend:(id)arg1;
- (void)setPayloadBooleanAnd:(id)arg1;
- (void)setPayloadBooleanOr:(id)arg1;
- (void)setPayloadDictionaryCombine:(id)arg1;
- (void)setPayloadDictionaryFirst:(id)arg1;
- (void)setPayloadEnumHighest:(id)arg1;
- (void)setPayloadEnumLowest:(id)arg1;
- (void)setPayloadFirstString:(id)arg1;
- (void)setPayloadNumberMax:(id)arg1;
- (void)setPayloadNumberMin:(id)arg1;
- (void)setPayloadSetIntersection:(id)arg1;
- (void)setPayloadSetUnion:(id)arg1;

@end
