
@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {
    NSOrderedSet * _values;
}

@property (nonatomic, readonly, copy) NSOrderedSet *values;

- (void).cxx_destruct;
- (bool)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 isUnified:(bool)arg4 logger:(id)arg5 error:(id*)arg6;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2;
- (id)description;
- (id)initWithValues:(id)arg1;
- (id)values;

@end
