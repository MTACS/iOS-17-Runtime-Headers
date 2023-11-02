
@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString * _compositeName;
    NSString * _firstName;
    NSString * _lastName;
}

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compositeName;
- (id)firstName;
- (id)lastName;
- (void)setCompositeName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;

@end
