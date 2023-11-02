
@interface __HMFOSUnfairLock : HMFUnfairLock {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internal;
    unsigned int  _internalOptions;
}

- (void)assertNotOwner;
- (void)assertOwner;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)performBlock:(id /* block */)arg1;
- (void)unlock;

@end
