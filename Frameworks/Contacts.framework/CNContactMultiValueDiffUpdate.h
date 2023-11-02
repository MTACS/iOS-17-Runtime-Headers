
@interface CNContactMultiValueDiffUpdate : CNContactUpdate {
    CNMultiValueDiff * _diff;
    CNMultiValuePropertyDescription * _property;
}

@property (readonly) CNMultiValueDiff *diff;
@property (readonly) CNMultiValuePropertyDescription *property;

- (void).cxx_destruct;
- (bool)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)description;
- (id)diff;
- (id)initWithProperty:(id)arg1 diff:(id)arg2;
- (id)property;

@end
