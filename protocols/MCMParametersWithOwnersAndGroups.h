
@protocol MCMParametersWithOwnersAndGroups

@required

- (unsigned long long)containerClass;
- (NSSet *)groupIdentifiers;
- (NSSet *)ownerIdentifiers;

@end
