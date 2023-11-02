
@interface RCOnce : NSObject {
    bool  _finished;
    RCMutexLock * _lock;
}

@property (nonatomic) bool finished;
@property (nonatomic, retain) RCMutexLock *lock;

- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)arg1;
- (bool)finished;
- (bool)hasBeenTriggered;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)lock;
- (void)setFinished:(bool)arg1;
- (void)setLock:(id)arg1;
- (bool)trigger;

@end
