
@interface WFDictionaryParameterState : NSObject <WFParameterState> {
    NSUUID * _identity;
    NSArray * _keyValuePairs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly, copy) NSArray *keyValuePairs;
@property (readonly) Class superclass;

+ (void)processValues:(id)arg1 context:(id)arg2 processingClass:(Class)arg3 userInputRequiredHandler:(id /* block */)arg4 valueHandler:(id /* block */)arg5;
+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithKeyValuePairs:(id)arg1;
- (id)initWithKeyValuePairs:(id)arg1 identity:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyValuePairs;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;

@end
