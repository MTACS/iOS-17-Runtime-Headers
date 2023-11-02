
@interface MTOSTransaction : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

+ (id)transactionWithDescription:(id)arg1;
+ (id)transactionWithDescription:(id)arg1 timeout:(double)arg2;
+ (id)transactionWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_cancel;
- (void)dealloc;
- (void)end;
- (id)initWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(id /* block */)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)timer;
- (id)transaction;

@end
