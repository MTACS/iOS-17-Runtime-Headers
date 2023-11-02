
@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation {
    VSDeveloperSettingsFetchOperation * _developerSettingsFetchOperation;
    VSIdentityProvider * _identityProvider;
    NSOperationQueue * _privateQueue;
    VSSubscriptionRegistrationCenter * _registrationCenter;
    NSArray * _subscriptionsToAdd;
    NSArray * _subscriptionsToRemoveByBundleID;
}

@property (nonatomic, retain) VSDeveloperSettingsFetchOperation *developerSettingsFetchOperation;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSSubscriptionRegistrationCenter *registrationCenter;
@property (nonatomic, copy) NSArray *subscriptionsToAdd;
@property (nonatomic, copy) NSArray *subscriptionsToRemoveByBundleID;

- (void).cxx_destruct;
- (id)_authorizedBundleIdsFromAppDescriptions:(id)arg1;
- (void)_registerSubscriptions:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2;
- (void)_removeSubscriptionsForBundleIdentifiers:(id)arg1 withAuthorizedBundleIdentifiers:(id)arg2;
- (void)cancel;
- (id)developerSettingsFetchOperation;
- (void)executionDidBegin;
- (id)identityProvider;
- (id)init;
- (id)initWithRegistrationCenter:(id)arg1 andDeveloperSettingsFetchOperation:(id)arg2;
- (id)privateQueue;
- (id)registrationCenter;
- (void)setDeveloperSettingsFetchOperation:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRegistrationCenter:(id)arg1;
- (void)setSubscriptionsToAdd:(id)arg1;
- (void)setSubscriptionsToRemoveByBundleID:(id)arg1;
- (id)subscriptionsToAdd;
- (id)subscriptionsToRemoveByBundleID;

@end
