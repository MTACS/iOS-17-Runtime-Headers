
@interface ICQUIEligibleTipPicker : NSObject {
    ACAccount * _account;
    ICQStoragePlanRecommendation * _planRecommendation;
}

- (void).cxx_destruct;
- (bool)_deviceStoragePassesCriteria:(id)arg1 freeCloudStorage:(id)arg2;
- (bool)_eligibleForSyncWithiCloudTipExcludingApps:(id)arg1;
- (void)getFirstEligibleTipFromTips:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1 planRecommendation:(id)arg2;

@end
