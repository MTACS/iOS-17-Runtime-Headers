
@protocol AFMemoryInfoMutating <NSObject>

@required

- (void)setNumberOfRegions:(int)arg1;
- (void)setPageSizeInBytes:(int)arg1;
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1;
- (void)setResidentMemorySizeInBytes:(unsigned long long)arg1;
- (void)setVirtualMemorySizeInBytes:(unsigned long long)arg1;

@end
