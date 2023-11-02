
@protocol CKDiscoverUserIdentitiesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleUserIdentityDiscoveryForLookupInfo:(CKUserIdentityLookupInfo *)arg1 userIdentity:(CKUserIdentity *)arg2;

@end
