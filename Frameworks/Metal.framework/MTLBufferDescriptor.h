
@interface MTLBufferDescriptor : NSObject <NSCopying> {
    unsigned long long  _alignment;
    void * _contents;
    id /* block */  _deallocator;
    unsigned long long  _length;
    bool  _noCopy;
    unsigned long long  _parentGPUAddress;
    unsigned long long  _parentGPUSize;
    unsigned long long  _pinnedGPUAddress;
    unsigned long long  _resourceOptions;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) void*contents;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) id /* block */ deallocator;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long length;
@property (nonatomic) bool noCopy;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property (nonatomic) unsigned long long pinnedGPUAddress;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long storageMode;

- (unsigned long long)alignment;
- (void*)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (id /* block */)deallocator;
- (unsigned long long)hash;
- (unsigned long long)hazardTrackingMode;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (bool)noCopy;
- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (unsigned long long)pinnedGPUAddress;
- (unsigned long long)resourceOptions;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setContents:(void*)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setDeallocator:(id /* block */)arg1;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setNoCopy:(bool)arg1;
- (void)setParentGPUAddress:(unsigned long long)arg1;
- (void)setParentGPUSize:(unsigned long long)arg1;
- (void)setPinnedGPUAddress:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;

@end
