
@interface CXVoicemailControllerHost : NSObject <CXVoicemailControllerHostConnectionDelegate, NSXPCListenerDelegate> {
    NSMutableSet * _connections;
    <CXVoicemailControllerHostDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _voicemailUUIDToVoicemailMap;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXVoicemailControllerHostDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *voicemailUUIDToVoicemailMap;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (id)_voicemailsForVoicemailControllerHostConnection:(id)arg1;
- (void)addOrUpdateVoicemails:(id)arg1;
- (id)connections;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithVoicemails:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)removeVoicemails:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVoicemailUUIDToVoicemailMap:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (void)voicemailControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)voicemailControllerHostConnection:(id)arg1 requestVoicemails:(id /* block */)arg2;
- (void)voicemailControllerHostConnectionInvalidated:(id)arg1;
- (id)voicemailUUIDToVoicemailMap;
- (id)xpcListener;

@end
