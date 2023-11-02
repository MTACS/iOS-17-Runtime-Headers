
@interface FigMetalAllocatorMetadata : NSObject {
    FigMetalAllocator * _allocator;
    int  _refCount;
    unsigned long long  _size;
}

- (void).cxx_destruct;
- (id)initWithFigMetalAllocator:(id)arg1;

@end
