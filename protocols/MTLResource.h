
@protocol MTLResource <NSObject>

@required

- (unsigned long long)allocatedSize;
- (unsigned long long)cpuCacheMode;
- (<MTLDevice> *)device;
- (unsigned long long)hazardTrackingMode;
- (<MTLHeap> *)heap;
- (unsigned long long)heapOffset;
- (bool)isAliasable;
- (NSString *)label;
- (void)makeAliasable;
- (unsigned long long)resourceOptions;
- (void)setLabel:(NSString *)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)storageMode;

@end
