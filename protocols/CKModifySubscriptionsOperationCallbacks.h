
@protocol CKModifySubscriptionsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleSubscriptionDeleteForSubscriptionID:(NSString *)arg1 error:(NSError *)arg2;
- (void)handleSubscriptionSaveForSubscriptionID:(NSString *)arg1 error:(NSError *)arg2;

@end
