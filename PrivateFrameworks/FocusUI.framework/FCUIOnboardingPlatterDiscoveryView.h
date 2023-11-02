
@interface FCUIOnboardingPlatterDiscoveryView : PLPlatterDiscoveryView <FocusUI.QuickStartViewControllerDelegate> {
    <FCUIOnboardingPlatterDiscoveryViewDelegate> * _delegate;
    FCUIOnboardingStackedNotificationView * _notificationPlatterView1;
    FCUIOnboardingStackedNotificationView * _notificationPlatterView2;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCUIOnboardingPlatterDiscoveryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_bodyStringForDNDModeSemanticType:(long long)arg1;
+ (id)onboardingPlatterDiscoveryViewForMode:(id)arg1;

- (void).cxx_destruct;
- (void)_configureGraphicViewIfNecessary;
- (void)_layoutGraphicView;
- (id)delegate;
- (id)initWithMode:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)presentQuickStartForModeIdentifier:(id)arg1;
- (void)requestDismissal:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
