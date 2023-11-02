
@interface ASAsyncTransactionQueue : NSObject {
    NSString * _description;
    NSObject<OS_dispatch_queue> * _lockingQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

- (void).cxx_destruct;
- (id)initWithDescription:(id)arg1 targetSerialQueue:(id)arg2;
- (void)performTransaction:(id /* block */)arg1;

@end
