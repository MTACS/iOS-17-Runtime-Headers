
@interface ICQUnfairLock : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (id)init;
- (void)synchronized:(id /* block */)arg1;

@end
