
@interface RBTargetPropertyDomainRestriction : RBDomainRestriction {
    NSNumber * _numberValue;
    NSString * _property;
    NSString * _stringValue;
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithProperty:(id)arg1 value:(id)arg2;
- (id)allEntitlements;
- (bool)allowsContext:(id)arg1 withError:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
