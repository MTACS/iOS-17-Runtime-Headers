
@interface DNDSIDSSyncService : NSObject <DNDSSyncService, IDSServiceDelegate> {
    <DNDSSyncServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _syncService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_handleIncomingMessage:(id)arg1 deviceIdentifier:(id)arg2;
- (void)_queue_resume;
- (bool)_queue_sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 messageType:(id)arg3 toDestinations:(id)arg4 requestIdentifier:(id*)arg5 error:(id*)arg6;
- (id)delegate;
- (id)initWithIDSService:(id)arg1;
- (void)resume;
- (void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 messageType:(id)arg3 toDestinations:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 messageType:(id)arg3 toDestinations:(id)arg4 identifyingCompletionHandler:(id /* block */)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;

@end
