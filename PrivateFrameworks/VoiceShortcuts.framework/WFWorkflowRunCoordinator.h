
@interface WFWorkflowRunCoordinator : NSObject <UNUserNotificationCenterDelegate, WFDialogPresentationManagerDelegate, WFToastManagerDelegate, WFUIPresenterDelegate> {
    <WFDatabaseProvider> * _databaseProvider;
    WFDialogNotificationManager * _dialogNotificationManager;
    WFDialogPresentationManager * _dialogPresentationManager;
    bool  _hasInitializedToastManager;
    NSObject<OS_dispatch_queue> * _queue;
    WFToastManager * _toastManager;
    WFUIPresenter * _userInterfacePresenter;
    WFUserNotificationManager * _userNotificationManager;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDialogNotificationManager *dialogNotificationManager;
@property (nonatomic, readonly) WFDialogPresentationManager *dialogPresentationManager;
@property (nonatomic) bool hasInitializedToastManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFToastManager *toastManager;
@property (nonatomic, readonly) WFUIPresenter *userInterfacePresenter;
@property (nonatomic, readonly) WFUserNotificationManager *userNotificationManager;

+ (id)errorCategory;
+ (id)errorWithActionCategory;
+ (long long)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)databaseProvider;
- (id)dialogNotificationManager;
- (id)dialogPresentationManager;
- (void)dismissToastedSessionKitSessionsWithReason:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemovedIgnoredNotifications:(id)arg1;
- (bool)hasInitializedToastManager;
- (id)initWithUserNotificationManager:(id)arg1 databaseProvider:(id)arg2;
- (void)postNotificationAboutFailure:(id)arg1 inWorkflow:(id)arg2 dialogAttribution:(id)arg3 runningContext:(id)arg4;
- (void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3;
- (void)presentationManager:(id)arg1 updateSmartPromptStateData:(id)arg2 actionUUID:(id)arg3 context:(id)arg4 reference:(id)arg5;
- (id)queue;
- (void)setHasInitializedToastManager:(bool)arg1;
- (void)showSingleStepCompletionWithWebClipMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)toastManager;
- (void)toastManager:(id)arg1 didDismissToastedSessionWithIdentifier:(id)arg2;
- (void)toastManager:(id)arg1 didFailToToastSessionWithIdentifier:(id)arg2 error:(id)arg3;
- (void)toastManager:(id)arg1 didToastSessionWithIdentifier:(id)arg2;
- (void)toastSessionKitSessionWithIdentifier:(id)arg1 forDuration:(id)arg2 completion:(id /* block */)arg3;
- (id)unsupportedDialogResponseWithRequest:(id)arg1;
- (id)userInterfacePresenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)userNotificationManager;

@end
