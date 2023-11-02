
@interface AFUIServiceDelegate : NSObject <AFUIModalUIDelegate, RTIInputSystemDelegate> {
    RTIInputSystemServiceSession * _currentSession;
    NSObject<OS_dispatch_queue> * _currentSessionQueue;
    RTIDocumentTraits * _currentTraits;
    NSMutableDictionary * _queuedOperations;
    NSUUID * _sessionIDBeforeAuthentication;
    NSUUID * _sessionIDBeforeContactsUI;
    NSMutableDictionary * _sessionPanels;
    NSNumber * _trackedInputIdentifier;
}

@property (nonatomic, retain) RTIInputSystemServiceSession *currentSession;
@property (retain) NSObject<OS_dispatch_queue> *currentSessionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkAndSendQueuedTextOperationsIfNecessary;
- (void)_displayPanelForSession:(id)arg1 traits:(id)arg2;
- (id)_inputIdentifierForSession:(id)arg1;
- (void)_sendAuthenticationStateOperation:(bool)arg1 completion:(id /* block */)arg2;
- (void)_sendOrQueueTextOperations:(id)arg1 withInputIdentifier:(id)arg2;
- (void)_sendTextOperations:(id)arg1 toSession:(id)arg2;
- (id)_setupPanelForSessionUUID:(id)arg1;
- (bool)_shouldAutomaticallyDisplayPanelForDocumentTraits:(id)arg1;
- (bool)_shouldDisplayPanelForSession:(id)arg1 documentTraits:(id)arg2;
- (void)_tearDownPanelForSessionUUID:(id)arg1;
- (void)authenticationDidEndWithCompletion:(id /* block */)arg1;
- (void)authenticationWillBeginWithCompletion:(id /* block */)arg1;
- (void)contactsUIDidEndWithCompletion:(id /* block */)arg1;
- (void)contactsUIWillBeginWithCompletion:(id /* block */)arg1;
- (id)currentSession;
- (id)currentSessionQueue;
- (id)init;
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSession:(id)arg2 documentStateDidChange:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSession:(id)arg2 documentTraitsDidChange:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSession:(id)arg2 performInputOperation:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2 options:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2 options:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;
- (void)inputSystemService:(id)arg1 prepareForInputSession:(id)arg2 options:(id)arg3;
- (void)setCurrentSession:(id)arg1;
- (void)setCurrentSessionQueue:(id)arg1;

@end
