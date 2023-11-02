
@interface MPMediaAPICollectionItemMetadataRequestController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _pendingOperationsIdentiferMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)cancelRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1 withBatchProgressHandler:(id /* block */)arg2;

@end
