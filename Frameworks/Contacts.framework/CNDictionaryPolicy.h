
@interface CNDictionaryPolicy : CNPermissivePolicy {
    NSDictionary * _policyDictionary;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactRestrictionsForLabeledProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isContactPropertySupported:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (id)unsupportedAttributesForLabeledContactProperty:(id)arg1;

@end
