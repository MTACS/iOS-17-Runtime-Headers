
@protocol ASPolicyManagerDelegate

@required

- (NSString *)accountID;
- (NSString *)accountPersistentUUID;
- (void)policyManagerFailedToUpdatePolicy:(ASPolicyManager *)arg1;
- (void)policyManagerUpdatedPolicy:(ASPolicyManager *)arg1;

@end
