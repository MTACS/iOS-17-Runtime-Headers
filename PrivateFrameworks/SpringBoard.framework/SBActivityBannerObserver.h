
@interface SBActivityBannerObserver : NSObject <SBActivityBannerViewControllerDelegate, SBActivityObserver> {
    long long  _activityEnvironment;
    NSMutableDictionary * _bannerPresentableByActivityIdentifier;
    NSMutableDictionary * _itemByActivityIdentifier;
    NSMutableSet * _prominentAlertPresentingActivities;
}

@property (nonatomic) long long activityEnvironment;
@property (nonatomic, retain) NSMutableDictionary *bannerPresentableByActivityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *itemByActivityIdentifier;
@property (nonatomic, retain) NSMutableSet *prominentAlertPresentingActivities;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissBannerWithActivityIdentifier:(id)arg1;
- (void)_handleActivityAlert:(id)arg1 present:(bool)arg2;
- (void)_handleProminentActivityAlert:(id)arg1 prominent:(bool)arg2;
- (void)_postBannerWithActivityIdentifier:(id)arg1 payloadIdentifier:(id)arg2 prominent:(bool)arg3 completion:(id /* block */)arg4;
- (void)_sendAnalyticsEventWithPayloadBuilder:(id /* block */)arg1;
- (void)activityBannerDidDisappear:(id)arg1 activityIdentifier:(id)arg2;
- (void)activityDidDismiss:(id)arg1;
- (void)activityDidEnd:(id)arg1;
- (void)activityDidStart:(id)arg1;
- (long long)activityEnvironment;
- (void)activityEnvironmentChanged:(long long)arg1;
- (void)activityProminenceChanged:(bool)arg1 item:(id)arg2;
- (id)bannerPresentableByActivityIdentifier;
- (void)dealloc;
- (void)dismissAlert:(id)arg1;
- (id)init;
- (id)itemByActivityIdentifier;
- (void)presentAlert:(id)arg1;
- (id)prominentAlertPresentingActivities;
- (void)setActivityEnvironment:(long long)arg1;
- (void)setBannerPresentableByActivityIdentifier:(id)arg1;
- (void)setItemByActivityIdentifier:(id)arg1;
- (void)setProminentAlertPresentingActivities:(id)arg1;
- (bool)shouldHandleActivityItem:(id)arg1;

@end
