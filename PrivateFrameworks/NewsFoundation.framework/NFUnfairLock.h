
@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
    unsigned int  _unfairLockOptions;
}

- (void)assertLocked;
- (void)assertNotLocked;
- (id)init;
- (id)initWithOptions:(long long)arg1;
- (void)lock;
- (void)performWithLockSync:(id /* block */)arg1;
- (void)unlock;

@end
