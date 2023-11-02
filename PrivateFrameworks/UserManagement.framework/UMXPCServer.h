
@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private, UMXPCClient> {
    id /* block */  _bubblePopHandler;
    NSData * _contextData;
    bool  _currentlyBroadcastingWillSwitchToUser;
    bool  _didBroadcastUploadContent;
    bool  _didBroadcastWillSwitchToUser;
    bool  _didRegisterPersonaCalbackStakeholder;
    bool  _didRegisterStakeholder;
    bool  _didSendTasks;
    id /* block */  _directSwitchCompletionHandler;
    unsigned int  _interruptionRetryCount;
    id /* block */  _loginUICheckinSessionCompletionHandler;
    id /* block */  _logoutToLoginSessionCompletionHandler;
    NSString * _machServiceName;
    NSData * _passcodeData;
    NSDictionary * _personaProfileDict;
    id /* block */  _personaRegistrationCompletionHandler;
    NSDictionary * _personaSpec;
    id  _personaStakeholder;
    id  _personaUpdateCallbackStakeholder;
    NSDictionary * _preferencesDict;
    id /* block */  _provisionCompletionHandler;
    NSDictionary * _provisionDict;
    id /* block */  _registrationCompletionHandler;
    NSObject<UMSideEffectsProviding> * _se;
    id  _stakeholder;
    unsigned long long  _stakeholderType;
    id /* block */  _suspendQuotasCompletionHandler;
    NSMutableArray * _switchBlockingTasks;
    id /* block */  _switchCompletionHandler;
    NSMutableArray * _syncTasks;
    NSString * _unregistrationReason;
    unsigned long long  _unregistrationStatus;
    id /* block */  _uploadContentCompletionHandler;
    id /* block */  _willSwitchCompletionHandler;
    unsigned long long  _willSwitchToUserAddedTaskCount;
    NSXPCConnection * _xpcConnection;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bubbleDidPop;
- (void)deviceLoginSessionStateDidUpdate;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loginUICheckInWithCompletionHandler:(id /* block */)arg1;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)arg1;
- (void)personaListDidUpdateCompletionHandler:(id /* block */)arg1;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(id /* block */)arg1;
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (void)uploadContentWithCompletionHandler:(id /* block */)arg1;
- (void)userInteractionIsEnabled;
- (void)userSwitchTaskListDidUpdate;
- (void)willSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;

@end
