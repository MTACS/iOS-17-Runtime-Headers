
@interface BSBlockSentinel : NSObject {
    NSObject<OS_dispatch_queue> * _explicitQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_expectedSignals;
    id /* block */  _lock_handler;
    NSString * _lock_identifier;
    unsigned long long  _lock_signalCount;
}

+ (id)sentinelWithCompletion:(id /* block */)arg1;
+ (id)sentinelWithExceptionReason:(id)arg1;
+ (id)sentinelWithQueue:(id)arg1 completion:(id /* block */)arg2;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(id /* block */)arg3;
+ (id)sentinelWithQueue:(id)arg1 signalHandler:(id /* block */)arg2;
+ (id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2;
+ (id)sentinelWithSignalCount:(unsigned long long)arg1 signalHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (bool)signal;
- (bool)signalWithContext:(id)arg1;

@end
