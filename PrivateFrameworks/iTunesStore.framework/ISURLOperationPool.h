
@interface ISURLOperationPool : NSObject {
    ISOperationQueue * _operationQueue;
}

@property (nonatomic, retain) ISOperationQueue *operationQueue;

- (id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2;
- (void)addOperation:(id)arg1 withFlags:(long long)arg2;
- (void)cancelOperation:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
