
@interface CBXpcConnection : NSObject {
    <CBXpcConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSMutableDictionary * _options;
    int  _sessionType;
    bool  _uiAppIsBackgrounded;
    NSMutableDictionary * _whbRemoteToLocalUuidMap;
    id /* block */  _whbReplyHandler;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (nonatomic) <CBXpcConnectionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_applicationWillEnterForegroundNotification;
- (void)_checkIn;
- (void)_checkOut;
- (void)_handleConnectionEvent:(id)arg1;
- (void)_handleFinalized;
- (void)_handleInvalid;
- (void)_handleMsg:(id)arg1;
- (void)_handleReset;
- (id)_nameForMessage:(unsigned short)arg1;
- (void)_sendBarrier;
- (id)delegate;
- (void)didReceiveForwardedDelegateCallbackMessage:(id)arg1;
- (void)didReceiveForwardedMessage:(id)arg1;
- (void)disconnect;
- (void)forwardWhbMsg:(unsigned short)arg1 args:(id)arg2 cnx:(id)arg3;
- (id)getEventQueue;
- (id)getWhbLocalIdForRemoteId:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;
- (void)removeWhbRemoteId:(id)arg1;
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (void)sendMsgWithReply:(unsigned short)arg1 args:(id)arg2 replyBlock:(id /* block */)arg3;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setWhbLocalId:(id)arg1 forRemoteId:(id)arg2;
- (void)setWhbReplyHandler:(id /* block */)arg1;

@end
