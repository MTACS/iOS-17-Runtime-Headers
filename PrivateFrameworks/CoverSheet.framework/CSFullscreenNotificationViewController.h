
@interface CSFullscreenNotificationViewController : CSModalViewControllerBase <CSModalViewDelegate, CSNotificationDestination> {
    NCNotificationAction * _dismissAction;
    <CSNotificationDispatcher> * _dispatcher;
    NCNotificationAction * _primaryAction;
    NCNotificationRequest * _request;
    NCNotificationAction * _secondaryAction;
    NCNotificationAction * _silenceAction;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CSNotificationDispatcher> *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissFromSignificantUserInteraction;
- (void)_handleAction:(id)arg1 withName:(id)arg2;
- (void)_handleDismissAction;
- (void)_handlePrimaryAction;
- (void)_handleSecondaryAction;
- (void)_handleSilenceAction;
- (void)_lockButtonPressed:(id)arg1;
- (void)_silencingHardwareButtonPressed:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)dealloc;
- (bool)dismissNotificationInLongLookAnimated:(bool)arg1;
- (id)dispatcher;
- (bool)handleEvent:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNotificationRequest:(id)arg1;
- (bool)isNotificationContentExtensionVisible:(id)arg1;
- (bool)isPresentingNotificationInLongLook;
- (void)loadView;
- (id)notificationRequest;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)setDispatcher:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)updateNotificationSystemSettings:(id)arg1 previousSystemSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
