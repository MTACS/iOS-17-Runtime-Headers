
@interface BSProcessDeathWatcher : NSObject {
    id /* block */  _deathHandler;
    BSDispatchSource * _source;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(id /* block */)arg3;
- (void)invalidate;

@end
