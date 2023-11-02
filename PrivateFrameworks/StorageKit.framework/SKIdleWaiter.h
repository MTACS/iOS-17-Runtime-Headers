
@interface SKIdleWaiter : NSObject <SKManagerListener> {
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)initialPopulateComplete;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;
- (void)waitForIdle;

@end
