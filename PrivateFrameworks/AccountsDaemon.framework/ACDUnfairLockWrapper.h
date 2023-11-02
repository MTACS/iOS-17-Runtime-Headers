
@interface ACDUnfairLockWrapper : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (id)init;

@end
