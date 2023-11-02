
@interface SSRVoiceProfileXPCClient : NSObject {
    <SSRVoiceProfileXPCClientDelegate> * _delegate;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic) <SSRVoiceProfileXPCClientDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

- (void).cxx_destruct;
- (void)_handleListenerDisconnectedError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)fetchEnrollmentStatusForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
