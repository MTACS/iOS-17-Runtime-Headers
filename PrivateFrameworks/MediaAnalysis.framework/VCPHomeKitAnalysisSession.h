
@interface VCPHomeKitAnalysisSession : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {
    NSXPCConnection * _connection;
    struct CF<const opaqueCMFormatDescription *> { 
        struct opaqueCMFormatDescription {} *value_; 
    }  _formatDescription;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    id /* block */  _interruptionHander;
    NSObject<OS_dispatch_queue> * _managementQueue;
    id /* block */  _resultsHandler;
}

+ (id)sessionWithProperties:(id)arg1 andResultsHandler:(id /* block */)arg2;
+ (id)sessionWithProperties:(id)arg1 withResultsHandler:(id /* block */)arg2 andInterruptionHandler:(id /* block */)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)connection;
- (id)initWithProperties:(id)arg1 withResultsHandler:(id /* block */)arg2 andInterruptionHandler:(id /* block */)arg3;
- (void)invalidate;
- (void)processMessageWithOptions:(id)arg1 andCompletionHandler:(id /* block */)arg2;
- (void)processResults:(id)arg1 withReply:(id /* block */)arg2;
- (void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andErrorHandler:(id /* block */)arg3;

@end
