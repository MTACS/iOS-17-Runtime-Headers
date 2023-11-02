
@interface CRXUDispatchSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> * _sem;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)init;
- (id)initWithValue:(unsigned long long)arg1;
- (void)signal;
- (void)wait;
- (bool)waitFor:(double)arg1;

@end
