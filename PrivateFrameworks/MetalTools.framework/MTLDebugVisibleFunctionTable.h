
@interface MTLDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLDebugResourcePurgeable> {
    unsigned long long  _functionCount;
    MTLToolsObject * _pipelineState;
    bool  _purgeableStateHasBeenSet;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _purgeableStateToken;
    unsigned long long  _stage;
}

@property (readonly) unsigned long long functionCount;
@property (readonly) unsigned long long stage;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)functionCount;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithVisibleFunctionTable:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 pipelineState:(id)arg4 stage:(unsigned long long)arg5;
- (id)initWithVisibleFunctionTable:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 stage:(unsigned long long)arg4;
- (void)lockPurgeableState;
- (bool)purgeableStateValidForRendering;
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)stage;
- (void)unlockPurgeableState;

@end
