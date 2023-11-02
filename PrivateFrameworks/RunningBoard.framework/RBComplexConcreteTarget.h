
@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString * _description;
    NSString * _environment;
    RBSProcessIdentity * _identity;
    RBProcess * _process;
}

- (void).cxx_destruct;
- (id)createRBSTarget;
- (id)description;
- (id)environment;
- (unsigned long long)hash;
- (id)identity;
- (bool)isEqual:(id)arg1;
- (bool)isSystem;
- (id)process;

@end
