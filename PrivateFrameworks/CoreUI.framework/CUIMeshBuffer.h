
@interface CUIMeshBuffer : NSObject <MDLMeshBuffer> {
    <MDLMeshBufferAllocator> * _allocator;
    NSMutableData * _data;
    unsigned long long  _type;
    <MDLMeshBufferZone> * _zone;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, retain) <MDLMeshBufferZone> *zone;

- (id)allocator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)init;
- (id)initWithBytes:(void*)arg1 andLength:(unsigned long long)arg2 ofType:(unsigned long long)arg3;
- (unsigned long long)length;
- (id)map;
- (unsigned long long)type;
- (id)zone;

@end
