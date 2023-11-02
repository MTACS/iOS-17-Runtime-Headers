
@interface WFNumberStringSubstitutableState : WFStringSubstitutableState {
    NSNumber * _legacyNumber;
}

@property (nonatomic, readonly) NSDecimalNumber *decimalNumber;
@property (nonatomic, retain) NSNumber *legacyNumber;

+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void).cxx_destruct;
- (id)decimalNumber;
- (id)initWithValue:(id)arg1;
- (id)legacyNumber;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (void)setLegacyNumber:(id)arg1;

@end
