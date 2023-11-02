
@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; bool x5; long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } * _private;
}

@property (nonatomic) bool sparsePageAccessCountersEnabled;
@property (nonatomic) long long sparsePageSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (id)description;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x1; unsigned long long x2; unsigned long long x3; long long x4; bool x5; long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; }*)descriptorPrivate;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (unsigned long long)hazardTrackingMode;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)memoryPoolId;
- (unsigned long long)pinnedGPUAddress;
- (unsigned long long)protectionOptions;
- (unsigned long long)resourceOptions;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (void)setMemoryPoolId:(unsigned long long)arg1;
- (void)setPinnedGPUAddress:(unsigned long long)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSparsePageAccessCountersEnabled:(bool)arg1;
- (void)setSparsePageSize:(long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)size;
- (bool)sparsePageAccessCountersEnabled;
- (long long)sparsePageSize;
- (unsigned long long)storageMode;
- (long long)type;
- (bool)validateWithDevice:(id)arg1;

@end
