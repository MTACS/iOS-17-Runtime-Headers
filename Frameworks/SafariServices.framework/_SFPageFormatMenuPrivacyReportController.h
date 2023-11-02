
@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController> {
    <_SFPageFormatMenuItemControllerDelegate> * _delegate;
    <_SFBrowserDocument> * _document;
    UIViewController * _enableTrackerProtectionViewController;
    MCProfileConnection * _profileConnection;
}

@property (nonatomic, readonly) _SFSettingsAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFPageFormatMenuItemControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_SFBrowserDocument> *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissPromptIfTrackerProtectionEnabled;
- (void)_initializeManagedProfileConnection;
- (void)_presentPrivacyReport;
- (bool)_presentPromptToTurnOnTrackingProtection;
- (id)alertItem;
- (void)dealloc;
- (id)delegate;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
