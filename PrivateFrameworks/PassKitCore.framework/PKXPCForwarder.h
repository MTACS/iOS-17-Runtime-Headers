
@interface PKXPCForwarder : NSObject {
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _target;
    Class  _targetClass;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
