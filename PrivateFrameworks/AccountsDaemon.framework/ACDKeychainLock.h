
@interface ACDKeychainLock : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _containerLock;
    NSMutableDictionary * _locksByServiceUsername;
}

- (void).cxx_destruct;
- (id)init;
- (void)lockPerformForService:(id)arg1 username:(id)arg2 block:(id /* block */)arg3;

@end
