
@interface WBSHideMyEmailManager : NSObject {
    WBSPrimaryAppleAccountObserver * _accountObserver;
    AKPrivateEmailController * _privateEmailController;
    WBSCloudSubscriptionFeatureAvailabilityObserver * _provisionNewHideMyEmailAvailabilityObserver;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_performOperation:(unsigned long long)arg1 withURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getRecordForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)provisionRecordForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
