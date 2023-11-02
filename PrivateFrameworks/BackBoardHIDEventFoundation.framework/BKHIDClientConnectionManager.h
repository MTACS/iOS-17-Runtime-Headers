
@interface BKHIDClientConnectionManager : NSObject {
    struct __CFDictionary { } * _hidConnectionToBKConnection;
    struct __IOHIDEventSystem { } * _hidEventSystem;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSMutableIntegerMap * _pidToClientConnectionMapping;
    BSMutableIntegerMap * _taskPortToClientConnectionMapping;
    NSMutableDictionary * _versionedPIDToClientConnectionMapping;
}

- (void).cxx_destruct;
- (id)addRemovalObserverForConnectionWithVersionedPID:(long long)arg1 observerBlock:(id /* block */)arg2;
- (id)bundleIDForPID:(int)arg1;
- (id)clientForDestination:(id)arg1;
- (id)clientForTaskPort:(unsigned int)arg1;
- (struct __IOHIDEventSystemConnection { }*)copyClientForDestination:(id)arg1;
- (struct __IOHIDEventSystemConnection { }*)copyClientForTaskPort:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithHIDEventSystem:(struct __IOHIDEventSystem { }*)arg1;
- (int)pidForBundleID:(id)arg1;
- (long long)versionedPIDForPID:(int)arg1;

@end
