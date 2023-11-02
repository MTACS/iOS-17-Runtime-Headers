
@interface AMSSubscriptionBag : NSObject {
    AMSFairPlayContext * _fairPlayContext;
}

@property (nonatomic, readonly) AMSFairPlayContext *fairPlayContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_generateSubscriptionBagRequestWithAccountIdentifier:(id)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id*)arg4 error:(id*)arg5;
- (id)fairPlayContext;
- (id)init;
- (id)subscriptionBagSyncDataForAccount:(id)arg1;

@end
