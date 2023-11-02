
@interface LBAttendingStatesServiceClient : NSObject <LBAttendingStatesService, LBAttendingStatesServiceDelegate> {
    <LBAttendingStatesServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteObjectProxy;
    NSXPCConnection * _xpcConnection;
    NSString * _xpcConnectionUUIDString;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LBAttendingStatesServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) id remoteObjectProxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSString *xpcConnectionUUIDString;

- (void).cxx_destruct;
- (id)_connection;
- (void)_invalidate;
- (id)_newConnection;
- (id)_service;
- (void)dealloc;
- (id)delegate;
- (void)dismissAttending;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)localAttendingStarted;
- (void)localAttendingStartedWithRootRequestId:(id)arg1;
- (void)localAttendingStoppedUnexpectedlyWithError:(id)arg1;
- (void)localAttendingWillStartWithRootRequestId:(id)arg1;
- (id)queue;
- (id)remoteObjectProxy;
- (void)requestDismissed;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionUUIDString:(id)arg1;
- (void)siriDidPrompt;
- (void)siriDidPromptWithRootRequestId:(id)arg1;
- (void)siriPromptWillStart;
- (void)siriPromptWillStartWithRootRequestId:(id)arg1;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;
- (void)speechStartDetectedWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;
- (void)speechStartDetectedWithShouldDuckTTS:(bool)arg1;
- (void)startUpdateStates;
- (id)xpcConnection;
- (id)xpcConnectionUUIDString;

@end
