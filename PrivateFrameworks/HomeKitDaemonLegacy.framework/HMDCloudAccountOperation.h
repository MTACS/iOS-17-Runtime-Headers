
@interface HMDCloudAccountOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSUUID * _identifier;
    id /* block */  _operationBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ operationBlock;

- (void).cxx_destruct;
- (id)clientQueue;
- (id)description;
- (id)identifier;
- (id)initWithBlock:(id /* block */)arg1 clientQueue:(id)arg2;
- (void)main;
- (id /* block */)operationBlock;
- (void)setOperationBlock:(id /* block */)arg1;

@end
