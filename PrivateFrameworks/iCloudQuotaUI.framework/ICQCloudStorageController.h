
@interface ICQCloudStorageController : PSListController {
    ICQCloudStorageGroupController * _cloudGroup;
    ICQUpgradeFlowManager * _quotaManager;
    NSTimer * _storageUpgradeOfferTimer;
}

- (void).cxx_destruct;
- (void)_changeStoragePlan;
- (void)_storageUpgrade;
- (void)_storageUpgradeOfferNotification:(id)arg1;
- (void)_storageUpgradeOfferTimeout:(id)arg1;
- (void)dealloc;
- (void)handleURL:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
