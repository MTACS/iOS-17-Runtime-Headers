
@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator> {
    <MTLHeap> * _heap;
    unsigned long long  _heapSize;
    bool  _isDebuggingEnabled;
    unsigned long long  _numResources;
    unsigned long long  _resourceOffset;
    unsigned long long  _resourceSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MTLHeap> *heap;
@property (nonatomic, readonly) unsigned long long heapSize;
@property (nonatomic) bool isDebuggingEnabled;
@property (nonatomic, readonly) unsigned long long numResources;
@property (nonatomic) unsigned long long resourceOffset;
@property (nonatomic, readonly) unsigned long long resourceSize;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allocateBuffer:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)heap;
- (unsigned long long)heapSize;
- (id)imageBatchForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3 count:(unsigned long long)arg4;
- (id)imageForCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 kernel:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 heapSize:(unsigned long long)arg2 resourceSize:(unsigned long long)arg3 numResources:(unsigned long long)arg4;
- (bool)isDebuggingEnabled;
- (unsigned long long)numResources;
- (unsigned long long)resourceOffset;
- (unsigned long long)resourceSize;
- (void)setIsDebuggingEnabled:(bool)arg1;
- (void)setResourceOffset:(unsigned long long)arg1;

@end
