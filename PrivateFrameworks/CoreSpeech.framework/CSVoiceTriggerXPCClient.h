
@interface CSVoiceTriggerXPCClient : NSObject {
    <CSVoiceTriggerXPCClientDelegate> * _delegate;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic) <CSVoiceTriggerXPCClientDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

- (void).cxx_destruct;
- (void)_handleListenerDisconnectedError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(id /* block */)arg3;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (id)fetchVoiceTriggerStats;
- (id)init;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)setDelegate:(id)arg1;
- (void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;
- (void)setRaiseToSpeakBypassing:(bool)arg1 timeout:(double)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
