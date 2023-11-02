
@interface CTStewieDataClient : NSObject <CTConnectionPairDelegate, CTStewieStateMonitorDelegate> {
    long long  fConnectedServices;
    CTConnectionPair * fConnectionPair;
    long long  fConnectionPairState;
    <CTStewieDataClientDelegate> * fDelegate;
    NSObject<OS_dispatch_queue> * fDelegateQueue;
    CTStewieStateMonitor * fMonitor;
    struct map<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>, std::less<std::string>, std::allocator<std::pair<const std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>>="__tree_"{__tree<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v {}  fOutgoingMessages;
    NSObject<OS_dispatch_queue> * fQueue;
    long long  fRequestedServices;
    bool  fStarted;
    CTStewieState * fState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connectionPairStateChanged:(long long)arg1;
- (void)createConnectionPairIfRequired;
- (void)discardConnectionPairIfRequired;
- (void)dispatchOnDelegateQueue:(id /* block */)arg1;
- (void)failAllPendingMessages;
- (id)getState;
- (id)initWithServices:(long long)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invokeSendCompletionForMsgId:(id)arg1 ack:(id)arg2 metadata:(id)arg3;
- (void)reEvaluate;
- (void)receivedData:(id)arg1 fromConnectionId:(long long)arg2;
- (bool)sendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMessageInternal:(id)arg1 usingConnection:(long long)arg2 completion:(id /* block */)arg3;
- (bool)start;
- (void)stateChanged:(id)arg1;
- (void)updateConnectedServices:(long long)arg1;

@end
