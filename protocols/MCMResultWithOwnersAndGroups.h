
@protocol MCMResultWithOwnersAndGroups <MCMResult>

@required

- (NSArray *)groupIdentifiers;
- (NSArray *)ownerIdentifiers;

@end
