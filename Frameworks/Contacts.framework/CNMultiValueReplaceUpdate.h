
@interface CNMultiValueReplaceUpdate : CNMultiValueSingleUpdate

- (bool)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 isUnified:(bool)arg4 logger:(id)arg5 error:(id*)arg6;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;

@end
