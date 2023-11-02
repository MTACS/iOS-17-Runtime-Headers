
@interface MDLMeshBufferViewAllocator : MDLBufferViewAllocator <MDLMeshBufferAllocator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)decodeMeshBufferWithCoder:(id)arg1 forKey:(id)arg2;
- (id)decodeMeshBuffersWithCoder:(id)arg1 forKey:(id)arg2;
- (void)encodeMeshBuffer:(id)arg1 withCoder:(id)arg2 forKey:(id)arg3;
- (void)encodeMeshBuffers:(id)arg1 withCoder:(id)arg2 forKey:(id)arg3;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBufferViewAtRegionIndex:(long long)arg1 type:(unsigned long long)arg2;
- (id)newBufferViewAtRegionIndex:(long long)arg1 type:(unsigned long long)arg2 length:(long long)arg3 offset:(long long)arg4;
- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newZone:(unsigned long long)arg1;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;

@end
