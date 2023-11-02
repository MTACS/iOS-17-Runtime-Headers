
@interface RBTargetsHostedDomainRestriction : RBDomainRestriction {
    NSArray * _restrictions;
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (id)_init;
- (id)allEntitlements;
- (bool)allowsContext:(id)arg1 withError:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
