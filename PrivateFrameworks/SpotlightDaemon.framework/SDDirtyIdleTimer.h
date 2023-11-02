
@interface SDDirtyIdleTimer : NSObject {
    id /* block */  _block;
    unsigned int  _dirtyCount;
    unsigned long long  _dirtyTimeout;
    unsigned long long  _idleStartTime;
    unsigned long long  _idleTimeout;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _resetCount;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned int dirtyCount;
@property (nonatomic) unsigned long long dirtyTimeout;
@property (nonatomic) unsigned long long idleStartTime;
@property (nonatomic) unsigned long long idleTimeout;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *idleTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned int resetCount;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)_stop;
- (id /* block */)block;
- (void)cancel;
- (id)description;
- (void)dirty;
- (unsigned int)dirtyCount;
- (unsigned long long)dirtyTimeout;
- (unsigned long long)idleStartTime;
- (unsigned long long)idleTimeout;
- (id)idleTimer;
- (id)initWithQueue:(id)arg1 timeoutBlock:(id /* block */)arg2;
- (id)queue;
- (unsigned int)resetCount;
- (void)setBlock:(id /* block */)arg1;
- (void)setDirtyCount:(unsigned int)arg1;
- (void)setDirtyTimeout:(unsigned long long)arg1;
- (void)setIdleStartTime:(unsigned long long)arg1;
- (void)setIdleTimeout:(unsigned long long)arg1;
- (void)setIdleTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResetCount:(unsigned int)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
