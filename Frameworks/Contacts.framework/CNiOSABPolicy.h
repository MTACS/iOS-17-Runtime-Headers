
@interface CNiOSABPolicy : CNPolicy <NSSecureCoding> {
    bool  _abSourceIsContentReadonly;
    void * _fakePerson;
    void * _iOSABPolicy;
}

+ (bool)supportsSecureCoding;

- (id)_orderedLabels:(id)arg1 withOrder:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddressBookPolicy:(void*)arg1 readOnly:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPolicy:(id)arg1;
- (bool)isReadonly;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (bool)shouldAddContact:(id)arg1;
- (bool)shouldRemoveContact:(id)arg1;
- (bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4;
- (id)supportedLabelsForContactProperty:(id)arg1;

@end
