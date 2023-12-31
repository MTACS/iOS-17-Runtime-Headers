
@interface WatchDogTimer : CHLogger {
    NSString * _name;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(id /* block */)arg4;

@end
