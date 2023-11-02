
@interface HUDropInBannerItemProvider : HFItemProvider <DIDeviceDelegate, DIDeviceManagerDelegate, DIDropInCenterDelegate, HFExecutionEnvironmentObserver, HMAudioAnalysisLastKnownEventSubscriberDelegate> {
    NSMutableDictionary * _accessoryIdentifierToEventBulletinsMapping;
    NSMutableSet * _bannerItems;
    <HUDropInBannerItemProviderDelegate> * _delegate;
    NSArray * _devices;
    DIDropInCenter * _dropInCenter;
    HMHome * _home;
    HMAudioAnalysisLastKnownEventSubscriber * _lastKnownEventSubscriber;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryIdentifierToEventBulletinsMapping;
@property (nonatomic, retain) NSMutableSet *bannerItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUDropInBannerItemProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, retain) DIDropInCenter *dropInCenter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HMAudioAnalysisLastKnownEventSubscriber *lastKnownEventSubscriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegate;
- (void)_setupDropInDelegatesIfNeeded;
- (id)accessoryIdentifierToEventBulletinsMapping;
- (id)bannerItems;
- (id)delegate;
- (void)device:(id)arg1 didUpdateState:(long long)arg2;
- (id)devices;
- (id)dropInCenter;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)lastKnownEventSubscriber;
- (void)manager:(id)arg1 didAddDevice:(id)arg2;
- (void)manager:(id)arg1 didRemoveDevice:(id)arg2;
- (void)managerDidUpdateDevices:(id)arg1;
- (id)reloadItems;
- (void)serverDisconnectedForDropInCenter:(id)arg1;
- (void)setAccessoryIdentifierToEventBulletinsMapping:(id)arg1;
- (void)setBannerItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDropInCenter:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLastKnownEventSubscriber:(id)arg1;
- (void)subscriber:(id)arg1 didUpdateBulletins:(id)arg2;

@end
