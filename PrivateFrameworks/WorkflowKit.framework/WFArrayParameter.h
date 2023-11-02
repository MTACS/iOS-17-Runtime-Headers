
@interface WFArrayParameter : WFParameter {
    NSSet * _allowedValueTypes;
    bool  _supportsVariables;
}

@property (nonatomic, readonly) NSSet *allowedValueTypes;
@property (nonatomic, readonly) bool supportsVariables;

- (void).cxx_destruct;
- (id)allowedValueTypes;
- (bool)allowsMultipleValues;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)stateClass;
- (bool)supportsVariables;

@end
