
@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {
    MTLToolsHeap * _heap;
    unsigned long long  _options;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (unsigned long long)allocatedSize;
- (unsigned long long)allocationID;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (unsigned long long)hazardTrackingMode;
- (id)heap;
- (unsigned long long)heapOffset;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;
- (bool)isAliasable;
- (bool)isComplete;
- (bool)isPurgeable;
- (id)label;
- (void)makeAliasable;
- (unsigned long long)options;
- (unsigned long long)protectionOptions;
- (unsigned long long)resourceOptions;
- (int)responsibleProcess;
- (void)setLabel:(id)arg1;
- (int)setOwnerWithIdentity:(unsigned int)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (unsigned long long)storageMode;
- (unsigned long long)unfilteredResourceOptions;
- (void)validateCPUReadable;
- (void)validateCPUWriteable;
- (void)waitUntilComplete;

@end
