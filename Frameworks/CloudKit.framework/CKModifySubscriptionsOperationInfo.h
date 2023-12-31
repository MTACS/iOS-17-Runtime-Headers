
@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _subscriptionIDsToDelete;
    NSArray * _subscriptionsToSave;
}

@property (nonatomic, retain) NSArray *subscriptionIDsToDelete;
@property (nonatomic, retain) NSArray *subscriptionsToSave;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsToSave;

@end
