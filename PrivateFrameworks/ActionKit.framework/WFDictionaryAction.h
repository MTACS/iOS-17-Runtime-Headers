
@interface WFDictionaryAction : WFAction

- (bool)hasReplacedArrayOrDictionaryWithVariable;
- (bool)hasReplacedArrayOrDictionaryWithVariableInState:(id)arg1;
- (id)minimumSupportedClientVersion;
- (void)runWithInput:(id)arg1 error:(id*)arg2;

@end
