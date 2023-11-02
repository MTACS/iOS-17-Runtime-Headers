
@interface __HMFActivityManager : HMFObject {
    NSHashTable * _activities;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)init;

@end
