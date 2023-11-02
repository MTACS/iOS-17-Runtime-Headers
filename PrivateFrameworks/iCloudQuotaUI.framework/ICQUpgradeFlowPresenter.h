
@interface ICQUpgradeFlowPresenter : NSObject <ICQUpgradeFlowManagerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)presentFlowWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;

@end
