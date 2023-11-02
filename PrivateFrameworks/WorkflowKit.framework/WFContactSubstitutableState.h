
@interface WFContactSubstitutableState : WFMultipleValueParameterState {
    WFCommunicationMethod * _communicationMethod;
}

@property (nonatomic, retain) WFCommunicationMethod *communicationMethod;

+ (id)processingValueClasses;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void).cxx_destruct;
- (id)communicationMethod;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithValue:(id)arg1;
- (void)processContentCollection:(id)arg1 context:(id)arg2 valueHandler:(id /* block */)arg3;
- (void)processIntoEntriesWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)processedEntriesFromCoercionResult:(id)arg1 allowsCustomHandles:(bool)arg2;
- (bool)reinterpretsStringsAsContactHandlesFromVariable:(bool)arg1;
- (id)serializedRepresentation;
- (void)setCommunicationMethod:(id)arg1;
- (id)stringInterpretedAsContactHandle:(id)arg1 allowsCustomHandles:(bool)arg2;
- (id)valueItemClasses;

@end
