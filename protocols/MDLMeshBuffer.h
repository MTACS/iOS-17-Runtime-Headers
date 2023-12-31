
@protocol MDLMeshBuffer <NSObject, NSCopying>

@required

- (<MDLMeshBufferAllocator> *)allocator;
- (void)fillData:(NSData *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)length;
- (MDLMeshBufferMap *)map;
- (unsigned long long)type;
- (<MDLMeshBufferZone> *)zone;

@end
