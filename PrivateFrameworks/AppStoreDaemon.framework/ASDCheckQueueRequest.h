
@interface ASDCheckQueueRequest : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    ASDCheckQueueRequestOptions * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)sendRequestCompletionBlock:(id /* block */)arg1;

@end
