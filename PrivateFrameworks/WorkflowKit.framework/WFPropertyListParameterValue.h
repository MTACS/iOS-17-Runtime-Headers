
@interface WFPropertyListParameterValue : NSObject <NSCopying, WFParameterState> {
    NSUUID * _identity;
    <WFParameterState> * _state;
    long long  _valueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly) <WFParameterState> *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long valueType;

+ (Class)classForValueType:(long long)arg1;
+ (id)defaultStateForValueType:(long long)arg1;
+ (id)localizedTitleForValueType:(long long)arg1;
+ (Class)processedClassForValueType:(long long)arg1;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithArray:(id)arg1;
- (id)initWithArrayState:(id)arg1;
- (id)initWithBoolean:(id)arg1;
- (id)initWithBooleanState:(id)arg1;
- (id)initWithChooseFromMenuItem:(id)arg1;
- (id)initWithChooseFromMenuItemState:(id)arg1;
- (id)initWithChooseFromMenuString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionaryState:(id)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithNumberState:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 valueType:(long long)arg4 variableStringStateClass:(Class)arg5;
- (id)initWithString:(id)arg1;
- (id)initWithStringState:(id)arg1;
- (id)initWithType:(long long)arg1 state:(id)arg2;
- (id)initWithType:(long long)arg1 state:(id)arg2 identity:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (id)state;
- (long long)valueType;

@end
