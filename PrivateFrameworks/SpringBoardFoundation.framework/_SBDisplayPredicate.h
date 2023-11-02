
@interface _SBDisplayPredicate : SBDisplayModePredicate {
    NSString * _displayHardwareIdentifier;
    NSString * _displayProductName;
}

+ (id)fromDefaultsKey:(id)arg1;

- (void).cxx_destruct;
- (id)defaultsKeyRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDisplay:(id)arg1;
- (id)initWithDisplayHardwareIdentifier:(id)arg1 productName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)matchesDisplay:(id)arg1;

@end
