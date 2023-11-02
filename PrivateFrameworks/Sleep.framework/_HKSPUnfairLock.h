
@interface _HKSPUnfairLock : NSObject <HKSPMutexProvider> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAssertingLocked:(id /* block */)arg1;

@end
