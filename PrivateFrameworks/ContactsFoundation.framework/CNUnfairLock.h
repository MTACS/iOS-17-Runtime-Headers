
@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _os_unfair_lock;
}

- (void)assertCurrentThreadIsNotOwner;
- (void)assertCurrentThreadIsOwner;
- (id)description;
- (id)init;
- (void)lock;
- (bool)tryLock;
- (void)unlock;

@end
