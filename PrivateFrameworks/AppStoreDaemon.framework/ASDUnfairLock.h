
@interface ASDUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (id)init;
- (void)lock;
- (void)unlock;

@end
