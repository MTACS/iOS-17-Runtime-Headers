
@interface RTTServer : HCServer {
    id /* block */  _actionCompletionBlock;
    RBSAssertion * _assertionInCallService;
    NSObject<OS_dispatch_queue> * _commonRequestQueue;
    NSLock * _dataResponseBlocksLock;
    NSMutableDictionary * _databaseResponseBlocks;
}

@property (nonatomic, copy) id /* block */ actionCompletionBlock;
@property (nonatomic, retain) RBSAssertion *assertionInCallService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createSandboxUrlForVoicemailMessage:(id)arg1;
- (void)_managerAXPIDState:(bool)arg1;
- (void)_registerForServerSettingsUpdates;
- (void)_takeStackshot;
- (id /* block */)actionCompletionBlock;
- (id)assertionInCallService;
- (void)cancelCallPromptDisplay;
- (bool)contactIsTTYContact:(id)arg1;
- (void)dealloc;
- (bool)deleteConversationWithCallUID:(id)arg1;
- (void)displayCallPromptForContact:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)findConversationForCallUID:(id)arg1 andResult:(id /* block */)arg2;
- (void)handleMessageError:(id)arg1 destructive:(bool)arg2;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (id)init;
- (bool)isEmergencyNumber:(id)arg1;
- (void)primeRTTServer;
- (void)registerForRemoteUpdates:(id /* block */)arg1 forCallUID:(id)arg2;
- (void)registerForServiceUpdates:(id /* block */)arg1 forCallUID:(id)arg2;
- (void)registerForUpdates:(id /* block */)arg1 forCallUID:(id)arg2;
- (void)registerResponseBlock:(id /* block */)arg1 forUUID:(id)arg2;
- (void)resetConnection;
- (void)sendConversationUpdate:(id)arg1;
- (void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;
- (void)sendString:(id)arg1 forCallUID:(id)arg2;
- (void)sendTranscription:(id)arg1 forCallUUID:(id)arg2 isNew:(bool)arg3;
- (void)setActionCompletionBlock:(id /* block */)arg1;
- (void)setAssertionInCallService:(id)arg1;
- (void)setShouldSuppressIncomingNotification:(bool)arg1;
- (void)setSystemOutputAudioMuted:(bool)arg1 withCallID:(id)arg2;
- (void)setTTYDictionaryAvailability:(bool)arg1;
- (void)setViewControllerIsVisible:(bool)arg1 withCallID:(id)arg2;
- (void)shouldRestartOnInterruption:(id /* block */)arg1;
- (void)terminateConnectionAndNotify:(bool)arg1;
- (id)valueForTTYSetting:(id)arg1;

@end
