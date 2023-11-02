
@interface MPCDeferrableTask : NSObject {
    id /* block */  _block;
    bool  _deallocating;
    bool  _finished;
    MSVBlockGuard * _guard;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) bool deallocating;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, retain) MSVBlockGuard *guard;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)cancel;
- (void)dealloc;
- (bool)deallocating;
- (id)description;
- (void)execute:(long long)arg1;
- (id)guard;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (bool)isFinished;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;
- (void)setDeallocating:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGuard:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setQueue:(id)arg1;
- (void)taskDidExecute;

@end
