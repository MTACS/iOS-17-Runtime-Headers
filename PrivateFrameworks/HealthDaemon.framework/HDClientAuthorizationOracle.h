
@interface HDClientAuthorizationOracle : NSObject {
    bool  _clientHasPrivateEntitlement;
    _HKEntitlements * _entitlements;
    HDProfile * _profile;
    NSString * _sourceBundleIdentifier;
}

@property (readonly) bool clientHasAuthorizationForAllTypes;

- (void).cxx_destruct;
- (id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id*)arg2;
- (bool)clientHasAuthorizationForAllTypes;
- (id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithSourceBundleIdentifier:(id)arg1 entitlements:(id)arg2 profile:(id)arg3;
- (bool)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id*)arg2;
- (bool)isAuthorizedToReadObject:(id)arg1 error:(id*)arg2;
- (bool)performReadAuthorizationTransactionWithError:(id*)arg1 handler:(id /* block */)arg2;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;
- (id)readAuthorizationStatusesForTypes:(id)arg1 error:(id*)arg2;

@end
