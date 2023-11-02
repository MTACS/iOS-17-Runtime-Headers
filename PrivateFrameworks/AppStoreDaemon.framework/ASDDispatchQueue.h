
@interface ASDDispatchQueue : NSObject <ASDTaskScheduler> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultQueue;

- (void).cxx_destruct;
- (void)assertQueue;
- (void)asyncUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)scheduleBlock:(id /* block */)arg1;
- (void)syncUsingBlock:(id /* block */)arg1;

@end
