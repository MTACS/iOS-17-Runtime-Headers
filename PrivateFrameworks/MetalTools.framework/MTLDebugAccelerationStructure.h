
@interface MTLDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLDebugResourcePurgeable> {
    MTLDebugBuffer * _debugBuffer;
    bool  _purgeableStateHasBeenSet;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _purgeableStateToken;
}

- (id)buffer;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;
- (void)lockPurgeableState;
- (bool)purgeableStateValidForRendering;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;

@end
