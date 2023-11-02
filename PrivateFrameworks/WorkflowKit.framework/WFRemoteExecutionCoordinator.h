
@interface WFRemoteExecutionCoordinator : NSObject <IDSServiceDelegate, WFRemoteExecutionSessionDelegate> {
    NSMutableArray * _activeSessions;
    bool  _allowRunRequests;
    NSMapTable * _completionsForSessions;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _service;
}

@property (nonatomic, retain) NSMutableArray *activeSessions;
@property (nonatomic, readonly) bool allowRunRequests;
@property (nonatomic, retain) NSMapTable *completionsForSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *pairedDeviceModelIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSService *service;
@property (readonly) Class superclass;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)activeSessions;
- (bool)allowRunRequests;
- (void)cancelAllSessions;
- (void)cancelPendingFileTransfers;
- (void)cancelRequest:(id)arg1;
- (void)cancelSessions:(id)arg1;
- (id)completionsForSessions;
- (id)defaultIDSOptions;
- (void)finishSessionWithRequest:(id)arg1;
- (void)handleAceCommandResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAlertRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAlertRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAskWhenRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleAskWhenRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleDialogRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleDialogRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleIncomingAceCommand:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleRunRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleRunRequestResponse:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleStopRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handleUnknownRequestMessage:(id)arg1;
- (bool)hasPairedDevice;
- (id)initAndAllowRunRequests:(bool)arg1;
- (void)mapSelectorsForIncomingProtobuf;
- (bool)messageCameFromPairedDevice:(id)arg1;
- (id)pairedDevice;
- (id)pairedDeviceModelIdentifier;
- (id)queue;
- (void)sendAceCommandDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)sendAlertRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendAskWhenRunRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendFileAtURL:(id)arg1 transferIdentifier:(id)arg2 requestIdentifier:(id)arg3 error:(id*)arg4;
- (void)sendRunRequest:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)sendRunRequestResponse:(id)arg1 completion:(id /* block */)arg2;
- (bool)sendStopRequest:(id)arg1 error:(id*)arg2;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sessionDidFinish:(id)arg1;
- (id)sessionFromRequestIdentifier:(id)arg1;
- (id)sessionsOfClass:(Class)arg1;
- (void)setActiveSessions:(id)arg1;
- (void)setCompletionsForSessions:(id)arg1;
- (void)setService:(id)arg1;
- (bool)shouldDropMessageDueToStaleness:(id)arg1;
- (id)unknownRequestError;
- (id)unknownRequestMessageWithIdentifier:(id)arg1;

@end
