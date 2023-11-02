
@interface GTLoopbackService : NSObject <GTLoopbackService> {
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)echo:(id)arg1;
- (void)echo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (void)echo:(id)arg1 repeat:(unsigned long long)arg2 callback:(id /* block */)arg3 complete:(id /* block */)arg4;
- (id)init;

@end
