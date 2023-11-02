
@interface WFNSProcessInfoBackgroundAssertion : WFBackgroundAssertion {
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)backgroundAssertionWithName:(id)arg1 expirationHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)end;
- (id)initWithName:(id)arg1 expirationHandler:(id /* block */)arg2;
- (id)semaphore;
- (void)setSemaphore:(id)arg1;

@end
