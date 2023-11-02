
@protocol CKFetchSubscriptionsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleSubscriptionFetchForSubscriptionID:(NSString *)arg1 subscription:(CKSubscription *)arg2 error:(NSError *)arg3;

@end
