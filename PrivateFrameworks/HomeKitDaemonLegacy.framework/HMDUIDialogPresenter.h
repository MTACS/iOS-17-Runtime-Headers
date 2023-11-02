
@interface HMDUIDialogPresenter : HMFObject {
    id  _currentContext;
    struct __CFUserNotification { } * _currentNotification;
    NSObject<OS_dispatch_semaphore> * _notificationSem;
    bool  _peerDeviceAcceptedSelection;
    NSMutableArray * _pendingContexts;
    bool  _selectedByPeerDevice;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) id currentContext;
@property (nonatomic) struct __CFUserNotification { }*currentNotification;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *notificationSem;
@property (nonatomic) bool peerDeviceAcceptedSelection;
@property (nonatomic, retain) NSMutableArray *pendingContexts;
@property (nonatomic) bool selectedByPeerDevice;
@property (nonatomic, readonly) bool shouldSkipAuthPromptDialog;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedUIDialogPresenter;

- (void).cxx_destruct;
- (bool)_addCurrentNotification:(struct __CFUserNotification { }*)arg1 withContext:(id)arg2;
- (bool)_addToPendingContext:(id)arg1;
- (void)_displayInternalTTRErrorWithContext:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_isPendingContext:(id)arg1;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5 selectedByPeerDevice:(bool*)arg6 timeout:(double)arg7;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id*)arg3 withContext:(id)arg4;
- (bool)_removeCurrentNotification:(struct __CFUserNotification { }*)arg1 currentSelection:(bool)arg2 selectedByPeerDevice:(bool*)arg3 andContext:(id)arg4;
- (void)_requestUserPermissionForDeletionOfHomeWithName:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionForRemovalOfRouter:(id)arg1 accessoriesRequiringManualReconfiguration:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionWithAccessoryPPIDInfo:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_showUserDialogForIncompatibleAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)currentContext;
- (struct __CFUserNotification { }*)currentNotification;
- (void)dealloc;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(bool)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayExecutionErrorOfTrigger:(id)arg1 partialSuccess:(bool)arg2 context:(id)arg3 completionQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)displayInternalTTRErrorWithContext:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)displayRestrictedBluetoothCharacteristicsWarningWithDeviceName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)notificationSem;
- (bool)peerDeviceAcceptedSelection;
- (id)pendingContexts;
- (void)requestUserPermissionForDeletionOfHomeWithName:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionForRemovalOfRouter:(id)arg1 accessoriesRequiringManualReconfiguration:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestUserPermissionForRemovalOfSpecificWiFiCredentialedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionWithAccessoryPPIDInfo:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (bool)selectedByPeerDevice;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentNotification:(struct __CFUserNotification { }*)arg1;
- (void)setNotificationSem:(id)arg1;
- (void)setPeerDeviceAcceptedSelection:(bool)arg1;
- (void)setPendingContexts:(id)arg1;
- (void)setSelectedByPeerDevice:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldSkipAuthPromptDialog;
- (void)showUserDialogForIncompatibleAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)workQueue;

@end
