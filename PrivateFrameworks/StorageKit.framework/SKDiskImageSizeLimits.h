
@interface SKDiskImageSizeLimits : NSObject {
    unsigned long long  _currentBytes;
    unsigned long long  _maxBytes;
    unsigned long long  _minBytes;
}

@property unsigned long long currentBytes;
@property unsigned long long maxBytes;
@property unsigned long long minBytes;

+ (bool)isSupportedWholeDisk:(id)arg1 error:(id*)arg2;
+ (unsigned long long)partitionMetadataSizeWithDiskType:(id)arg1;

- (unsigned long long)currentBytes;
- (id)getLastPartitionFromDisk:(id)arg1;
- (unsigned long long)hfsMinimalSize:(id)arg1;
- (unsigned long long)maxBytes;
- (unsigned long long)minBytes;
- (unsigned long long)physicalStoreMinimumSizeFromStore:(id)arg1;
- (void)setCurrentBytes:(unsigned long long)arg1;
- (void)setMaxBytes:(unsigned long long)arg1;
- (void)setMinBytes:(unsigned long long)arg1;

@end
