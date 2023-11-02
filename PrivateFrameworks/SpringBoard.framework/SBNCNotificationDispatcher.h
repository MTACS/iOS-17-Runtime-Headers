
@interface SBNCNotificationDispatcher : NSObject <CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding> {
    SBNCAlertingController * _alertingController;
    SBNotificationBannerDestination * _bannerDestination;
    SBNotificationCarPlayDestination * _carDestination;
    SBCommunicationPolicyManager * _communicationPolicyManager;
    <SBNotificationDestination> * _dashBoardDestination;
    NCNotificationDispatcher * _dispatcher;
    SBNCNotificationDispatcherDelegate * _dispatcherDelegate;
    SBLockScreenManager * _lockScreenManager;
    SBLockStateAggregator * _lockStateAggregator;
    SBNotificationCenterDestination * _notificationCenterDestination;
    NCBulletinNotificationSource * _notificationSource;
    SBUserAlertNotificationSource * _userNotificationAlertSource;
    SBWalletNotificationSource * _walletNotificationSource;
}

@property (nonatomic, retain) SBNCAlertingController *alertingController;
@property (nonatomic, readonly) SBNotificationBannerDestination *bannerDestination;
@property (nonatomic, retain) SBNotificationCarPlayDestination *carDestination;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *carOpenServiceEndpoint;
@property (nonatomic, retain) SBCommunicationPolicyManager *communicationPolicyManager;
@property (nonatomic, readonly) <SBNotificationDestination> *dashBoardDestination;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property (nonatomic, retain) SBNCNotificationDispatcherDelegate *dispatcherDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCarDestinationActive;
@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) SBLockStateAggregator *lockStateAggregator;
@property (nonatomic, readonly) SBNotificationCenterDestination *notificationCenterDestination;
@property (nonatomic, retain) NCBulletinNotificationSource *notificationSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBUserAlertNotificationSource *userNotificationAlertSource;
@property (nonatomic, readonly) SBWalletNotificationSource *walletNotificationSource;

- (void).cxx_destruct;
- (void)_aggregateLockStateDidChange;
- (void)_carPlayDestinationAvailabilityDidChange;
- (bool)_lockScreenWantsBanners;
- (void)_setupNewDestinationsForDispatcher:(id)arg1;
- (void)_updateActiveDestinations;
- (id)alertingController;
- (id)bannerDestination;
- (id)carDestination;
- (id)carOpenServiceEndpoint;
- (id)communicationPolicyManager;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (id)dashBoardDestination;
- (id)dispatcher;
- (id)dispatcherDelegate;
- (id)init;
- (bool)isCarDestinationActive;
- (bool)isNotificationContentExtensionVisible:(id)arg1;
- (id)keyWindowForScreen:(id)arg1;
- (id)lockScreenManager;
- (id)lockStateAggregator;
- (id)notificationCenterDestination;
- (id)notificationSource;
- (void)setAlertingController:(id)arg1;
- (void)setCarDestination:(id)arg1;
- (void)setCommunicationPolicyManager:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setDispatcherDelegate:(id)arg1;
- (void)setLockScreenManager:(id)arg1;
- (void)setLockStateAggregator:(id)arg1;
- (void)setNotificationSource:(id)arg1;
- (void)setUserNotificationAlertSource:(id)arg1;
- (id)userNotificationAlertSource;
- (id)walletNotificationSource;

@end
