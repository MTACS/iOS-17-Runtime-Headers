
@interface SGXpcTransaction : NSObject {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _done;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSObject<OS_os_transaction> * _transaction;
}

+ (id)transactionWithName:(const void*)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)done;
- (bool)doneReturningWasDone;
- (id)init;
- (id)initWithName:(const void*)arg1;
- (void)setTimeout:(double)arg1;

@end
