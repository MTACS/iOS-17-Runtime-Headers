
@interface CSVoiceIdXPCClient : NSObject {
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

+ (void)notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)_decodeError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)_notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(id /* block */)arg6;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(id /* block */)arg3;
- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
