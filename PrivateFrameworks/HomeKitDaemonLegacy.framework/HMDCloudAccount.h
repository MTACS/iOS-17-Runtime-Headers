
@interface HMDCloudAccount : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSOperationQueue * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSOperationQueue *queue;

- (void).cxx_destruct;
- (void)addAccountOperation:(id /* block */)arg1;
- (id)clientQueue;
- (id)initWithClientQueue:(id)arg1;
- (id)queue;

@end
