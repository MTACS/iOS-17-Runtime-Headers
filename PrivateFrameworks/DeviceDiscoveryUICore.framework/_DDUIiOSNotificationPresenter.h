
@interface _DDUIiOSNotificationPresenter : NSObject <UNUserNotificationCenterDelegate, _DDUINotificationPresenter> {
    <_DDUIiOSNotificationPresenterApplicationRecordVendor> * _applicationRecordVendor;
    NSObject<OS_dispatch_source> * _clearNotificationTimer;
    <_DDUINotificationPresenterDelegate> * _delegate;
    UNUserNotificationCenter * _notificationCenter;
    FBSOpenApplicationService * _openApplicationService;
    _DDUIiOSPresentedNotification * _presentedNotification;
    bool  _setup;
    SFWirelessSettingsController * _wirelessSettingsController;
}

@property (nonatomic, retain) <_DDUIiOSNotificationPresenterApplicationRecordVendor> *applicationRecordVendor;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *clearNotificationTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_DDUINotificationPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, retain) FBSOpenApplicationService *openApplicationService;
@property (nonatomic, retain) _DDUIiOSPresentedNotification *presentedNotification;
@property (nonatomic) bool setup;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFWirelessSettingsController *wirelessSettingsController;

- (void).cxx_destruct;
- (bool)_applicationSupportsServiceIdentifier:(id)arg1 serviceIdentifier:(id)arg2;
- (void)_clearNotificationTimeout;
- (void)_clearPresentedNotificationIfNeeded;
- (void)_configureNotificationTimeout;
- (id)_createAppStoreNotification:(id)arg1;
- (id)_createConnectNotificationWithDeviceName:(id)arg1 appName:(id)arg2;
- (id)_createContinuityCameraNotificationWithDeviceName:(id)arg1;
- (void)_handleContinuityCameraDisabledAlertResponseWithState:(long long)arg1;
- (void)_setupIfNeeded;
- (void)_showContinuityCameraDisabledAlertWithState:(long long)arg1;
- (id)applicationRecordVendor;
- (id)clearNotificationTimer;
- (id)delegate;
- (void)dismissNotificationWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 applicationRecordVendor:(id)arg2 openApplicationService:(id)arg3;
- (id)notificationCenter;
- (id)openApplicationService;
- (id)presentedNotification;
- (void)setApplicationRecordVendor:(id)arg1;
- (void)setClearNotificationTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setOpenApplicationService:(id)arg1;
- (void)setPresentedNotification:(id)arg1;
- (void)setSetup:(bool)arg1;
- (void)setWirelessSettingsController:(id)arg1;
- (bool)setup;
- (void)showContinuityCameraConfirmation:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
- (void)showNotificationForApplication:(id)arg1 deviceName:(id)arg2 identifier:(id)arg3 completion:(id /* block */)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)wirelessSettingsController;

@end
