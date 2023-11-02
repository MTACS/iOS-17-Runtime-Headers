
@interface WFArrayParameterState : NSObject <WFParameterState> {
    NSUUID * _identity;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identity;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *values;

+ (void)processValues:(id)arg1 context:(id)arg2 processingClass:(Class)arg3 userInputRequiredHandler:(id /* block */)arg4 valueHandler:(id /* block */)arg5 processSingleVariableStringsAsContentItems:(bool)arg6;
+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithValues:(id)arg1;
- (id)initWithValues:(id)arg1 identity:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (id)values;

@end
