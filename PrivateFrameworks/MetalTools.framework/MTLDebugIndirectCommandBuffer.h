
@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLDebugResourcePurgeable> {
    MTLIndirectCommandBufferDescriptor * _desc;
    <MTLIndirectCommandBuffer> * _iCB;
    bool  _isRender;
    unsigned long long  _maxCommandCount;
    NSMutableArray * _optimizedRangeList;
    bool  _purgeableStateHasBeenSet;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _purgeableStateToken;
}

@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) NSMutableArray *optimizedRangeList;

- (void)dealloc;
- (id)descriptor;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (void)lockPurgeableState;
- (id)optimizedRangeList;
- (bool)purgeableStateValidForRendering;
- (void)resetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;

@end
