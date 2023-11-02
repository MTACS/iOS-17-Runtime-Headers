
@interface CNPolicyDescription : NSObject {
    NSString * _containerIdentifier;
    bool  _ignoresGuardianRestrictions;
}

@property (copy) NSString *containerIdentifier;
@property bool ignoresGuardianRestrictions;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (bool)ignoresGuardianRestrictions;
- (void)setContainerIdentifier:(id)arg1;
- (void)setIgnoresGuardianRestrictions:(bool)arg1;

@end
