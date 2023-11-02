
@protocol MCMParametersReferencesQuery

@required

- (bool)createDuringReconciliation;
- (bool)deleteDuringReconciliation;
- (unsigned long long)explicitFlags;
- (unsigned long long)privateFlags;
- (unsigned int)uid;
- (MCMUserIdentity *)userIdentity;
- (bool)yesReallyApplyToAll;

@end
