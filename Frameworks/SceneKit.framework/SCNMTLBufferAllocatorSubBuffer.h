
@interface SCNMTLBufferAllocatorSubBuffer : SCNMTLBuffer {
    SCNFixedSizePage * _parentPage;
}

- (void)dealloc;
- (id)initWithPage:(id)arg1 allocator:(id)arg2;

@end
