
@interface HDSerialQueueBlockDispatcher : NSObject <HDBlockDispatcher> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dispatchBlock:(id /* block */)arg1 name:(id)arg2;
- (id)init;

@end
