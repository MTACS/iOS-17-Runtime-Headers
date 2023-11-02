
@interface WFLinkStartWorkoutParameterState : WFVariableSubstitutableParameterState

@property (nonatomic, readonly, copy) NSString *localizedTitle;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)initWithLinkAction:(id)arg1;
- (id)localizedTitle;

@end
