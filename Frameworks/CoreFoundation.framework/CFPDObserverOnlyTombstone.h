
@interface CFPDObserverOnlyTombstone : NSObject {
    struct __CFString { } * _domain;
    union { 
        NSObject<OS_xpc_object> *_single; 
        struct __CFSet {} *_multiple; 
    }  _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observingConnectionsLock;
    unsigned short  _shmemIndex;
    struct __CFString { } * _userOrContainer;
}

- (void)alreadyLocked_transferObservingConnectionsFromSource:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initMatchingSource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeObservingConnection:(id)arg1 daemon:(id)arg2;
- (void)transferObservingConnectionsToSource:(id)arg1;

@end
