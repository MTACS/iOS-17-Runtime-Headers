
@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {
    NSArray * _predicate;
}

- (void).cxx_destruct;
- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)initWithArray:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4;
- (bool)matchesEntitlements:(id)arg1;

@end
