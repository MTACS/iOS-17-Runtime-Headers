
@interface WFInputAction : WFAction {
    NSSet * _inputSurfaces;
}

@property (nonatomic, retain) NSSet *inputSurfaces;

+ (id)inputActionForWorkflow:(id)arg1;
+ (id)serializedParametersForWorkflow:(id)arg1;
+ (id)serializedParametersFromActionSerializedParameters:(id)arg1 itemClass:(Class)arg2;

- (void).cxx_destruct;
- (id)actionSerializedParametersForSelectionOfItemClass:(Class)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)inputSurfaces;
- (bool)isDeletable;
- (id)minimumSupportedClientVersion;
- (id)noInputBehavior;
- (void)removedFromWorkflow;
- (id)selectedAskForType;
- (id)selectedBehavior;
- (id)selectedInputTypes;
- (void)setInputSurfaces:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateWorkflowState;

@end
