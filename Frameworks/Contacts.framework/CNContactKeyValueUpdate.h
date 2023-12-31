
@interface CNContactKeyValueUpdate : CNContactUpdate {
    CNPropertyDescription * _property;
    id  _value;
}

@property (readonly) CNPropertyDescription *property;
@property (readonly) id value;

- (void).cxx_destruct;
- (bool)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id*)arg4;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)property;
- (id)value;

@end
