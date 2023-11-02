
@interface MDLMeshBufferView : MDLBufferView <MDLMeshBuffer> {
    MDLMeshBufferViewAllocator * _allocator;
    unsigned long long  _type;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) const void*data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, retain) <MDLMeshBufferZone> *zone;

- (void).cxx_destruct;
- (id)allocator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fillData:(id)arg1 offset:(unsigned long long)arg2;
- (id)init;
- (id)initWithBufferViewNoCopy:(id)arg1 type:(unsigned long long)arg2;
- (id)map;
- (unsigned long long)type;
- (id)zone;

@end
