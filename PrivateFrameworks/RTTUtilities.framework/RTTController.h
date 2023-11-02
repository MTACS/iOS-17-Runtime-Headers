
@interface RTTController : NSObject <AXUIClientDelegate, RTTCallDelegate, RTTTranscriptionControllerDelegate, TUCallCapabilitiesDelegate> {
    id /* block */  _actionCompletionBlock;
    AXUIClient * _actionUIClient;
    AXDispatchTimer * _callUpdateCoalescer;
    <HCHeardControllerProtocol> * _delegate;
    NSMutableDictionary * _localSettingsCache;
    AXDispatchTimer * _preferredRelayCoalescer;
    NSMutableArray * _rttCalls;
    id /* block */  _serverInvalidateCallback;
    bool  _shouldSuppressIncomingNotification;
    RTTTranscriptionController * _transcriber;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic, copy) id /* block */ actionCompletionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HCHeardControllerProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *rttCalls;
@property (nonatomic, copy) id /* block */ serverInvalidateCallback;
@property (nonatomic) bool shouldSuppressIncomingNotification;
@property (readonly) Class superclass;
@property (nonatomic, retain) RTTTranscriptionController *transcriber;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_callForUUIDWithoutRefresh:(id)arg1;
- (void)_handlePreferredRelayNumberUpdate;
- (void)_refreshCurrentCallList;
- (void)_refreshCurrentCallListWithExistingCalls:(id)arg1;
- (void)_requestNotificationAuthorization;
- (void)_requestNotificationAuthorizationIfNecessary;
- (void)_updateConversationControllerWithTranscription:(id)arg1 type:(long long)arg2 callUUID:(id)arg3;
- (id)actionClient;
- (id /* block */)actionCompletionBlock;
- (void)callDidConnect:(id)arg1;
- (id)callForUUID:(id)arg1;
- (void)clientRemoved:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeTelephonyCallingSupport;
- (void)dismissRTTFirstUseAlert;
- (id)displayCallPrompt:(id)arg1;
- (void)displayRTTFirstUseAlert;
- (id)handleDatabaseRequest:(id)arg1;
- (id)handleDictionaryRequest:(id)arg1;
- (id)handleIncomingNotificationSuppressionChange:(id)arg1;
- (id)handleMediaAction:(id)arg1;
- (id)handleRTTControllerIsVisible:(id)arg1;
- (id)handleRTTVoicemailMessage:(id)arg1;
- (id)handleSettingsRequest:(id)arg1;
- (void)handleUpdatedCalls:(id)arg1;
- (id)init;
- (bool)invalidateServerCaches:(id)arg1;
- (id)rttCalls;
- (id /* block */)serverInvalidateCallback;
- (void)setActionCompletionBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRttCalls:(id)arg1;
- (void)setServerInvalidateCallback:(id /* block */)arg1;
- (void)setShouldSuppressIncomingNotification:(bool)arg1;
- (void)setTranscriber:(id)arg1;
- (bool)shouldSuppressIncomingNotification;
- (id)transcriber;
- (void)transcriptionDidStart:(id)arg1 forCallUUID:(id)arg2;
- (void)transcriptionDidUpdate:(id)arg1 forCallUUID:(id)arg2;
- (void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3;
- (void)ttyCall:(id)arg1 didSendRemoteString:(id)arg2 forUtterance:(id)arg3;
- (void)ttyCall:(id)arg1 setVisible:(bool)arg2 serviceUpdate:(id)arg3;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
