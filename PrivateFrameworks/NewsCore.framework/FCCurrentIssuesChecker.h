
@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {
    <FCBundleSubscriptionProviderType> * _bundleSubscriptionProvider;
    <FCContentContext> * _context;
    FCIssueReadingHistory * _issueReadingHistory;
    FCSubscriptionController * _subscriptionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchUsersCurrentIssuesWithCompletion:(id /* block */)arg1;
- (void)fetchUsersFollowedIssuesWithQualityOfService:(long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3 bundleSubscriptionProvider:(id)arg4;

@end
