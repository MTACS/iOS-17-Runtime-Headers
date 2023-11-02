
@interface WFQuantityParameterState : NSObject <WFParameterState, WFVariableSupportingParameterState> {
    WFNumberStringSubstitutableState * _magnitudeState;
    NSString * _unitString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFNumberStringSubstitutableState *magnitudeState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unitString;
@property (nonatomic, readonly) WFVariable *variable;

+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)magnitudeState;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (id)unitString;

@end
