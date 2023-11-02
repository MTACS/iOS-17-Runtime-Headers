
@interface DMTimer : NSObject {
    id /* block */  _fireBlock;
    unsigned long long  _secondsBeforeFirstFire;
    unsigned long long  _secondsOfLeeway;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) id /* block */ fireBlock;
@property (nonatomic) unsigned long long secondsBeforeFirstFire;
@property (nonatomic) unsigned long long secondsOfLeeway;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelSynchronously;
- (id /* block */)fireBlock;
- (id)initWithSecondsBeforeFirstFire:(unsigned long long)arg1 secondsOfLeeway:(unsigned long long)arg2 fireBlock:(id /* block */)arg3;
- (void)resume;
- (unsigned long long)secondsBeforeFirstFire;
- (unsigned long long)secondsOfLeeway;
- (void)setFireBlock:(id /* block */)arg1;
- (void)setSecondsBeforeFirstFire:(unsigned long long)arg1;
- (void)setSecondsOfLeeway:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
