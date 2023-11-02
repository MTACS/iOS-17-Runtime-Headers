
@protocol MDLMeshBufferZone <NSObject>

@required

- (<MDLMeshBufferAllocator> *)allocator;
- (unsigned long long)capacity;

@end
