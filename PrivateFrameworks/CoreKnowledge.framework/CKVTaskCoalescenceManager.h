
@interface CKVTaskCoalescenceManager : NSObject {
    double  _coalescenceDelay;
    double  _coalescenceInterval;
    _Atomic unsigned int  _eventIdCounter;
    double  _initalizedCoalescenceDelay;
    NSString * _managerName;
    NSObject<OS_dispatch_queue> * _taskExecutionQueue;
    NSMutableDictionary * _taskRegistry;
    NSObject<OS_dispatch_queue> * _taskRegistryQueue;
    NSObject<OS_os_transaction> * _transaction;
    unsigned int  _transactionCounter;
}

@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (bool)_didIncomingTask:(id)arg1 arriveInCoalescingWindowWithLastTask:(id)arg2;
- (void)_endTransaction;
- (id)init;
- (id)initWithManagerName:(id)arg1 coalescenceInterval:(double)arg2 coalescenceDelay:(double)arg3 dispatchQoS:(unsigned int)arg4;
- (void)overrideCoalescenceDelay:(double)arg1;
- (void)removeOverrides;
- (void)submitTaskWithId:(unsigned short)arg1 taskBlock:(id /* block */)arg2 coalesce:(bool)arg3 completion:(id /* block */)arg4;
- (id)transaction;

@end
