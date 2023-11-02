
@interface PHRecyclableObjectVendor : NSObject {
    id /* block */  _builder;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _recycledObjects;
    bool  _repsondsToPrepareForReuse;
    Class  _targetClass;
    bool  _threadSafe;
}

- (void).cxx_destruct;
- (id)dequeueRecyclableObject;
- (id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(bool)arg2 initialPoolSize:(long long)arg3;
- (id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(bool)arg2 initialPoolSize:(long long)arg3 prototypeStep:(id /* block */)arg4;
- (void)recycleObject:(id)arg1;

@end
