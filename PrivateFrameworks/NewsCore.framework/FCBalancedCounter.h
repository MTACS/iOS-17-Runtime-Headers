
@interface FCBalancedCounter : NSObject {
    long long  _count;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) long long count;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;

- (void).cxx_destruct;
- (void)_bumpCounterPositively:(bool)arg1;
- (long long)count;
- (void)decrement;
- (id)dispatchGroup;
- (void)increment;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)notifyWhenCountReachesZeroOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)setCount:(long long)arg1;
- (void)setDispatchGroup:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
