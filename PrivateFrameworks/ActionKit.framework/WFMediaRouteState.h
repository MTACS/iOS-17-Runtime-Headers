
@interface WFMediaRouteState : WFVariableSubstitutableParameterState {
    MPAVRoute * _route;
}

@property (nonatomic, readonly) MPAVRoute *route;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1;
- (id)route;

@end
