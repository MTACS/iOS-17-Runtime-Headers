
@interface IOAccelMemoryPoolTotals : NSObject {
    unsigned long long  allocatedSize;
    NSString * device_name;
    unsigned long long  dirtySize;
    unsigned long long  nonpurgeableSize;
    unsigned long long  orphanedSize;
    NSString * pool;
    unsigned long long  purgeableSize;
    unsigned long long  residentSize;
    unsigned long long  wiredSize;
}

@property unsigned long long allocatedSize;
@property (retain) NSString *device_name;
@property unsigned long long dirtySize;
@property unsigned long long nonpurgeableSize;
@property unsigned long long orphanedSize;
@property (retain) NSString *pool;
@property unsigned long long purgeableSize;
@property unsigned long long residentSize;
@property unsigned long long wiredSize;

- (unsigned long long)allocatedSize;
- (void)dealloc;
- (id)device_name;
- (unsigned long long)dirtySize;
- (unsigned long long)nonpurgeableSize;
- (unsigned long long)orphanedSize;
- (id)pool;
- (unsigned long long)purgeableSize;
- (unsigned long long)residentSize;
- (void)setAllocatedSize:(unsigned long long)arg1;
- (void)setDevice_name:(id)arg1;
- (void)setDirtySize:(unsigned long long)arg1;
- (void)setNonpurgeableSize:(unsigned long long)arg1;
- (void)setOrphanedSize:(unsigned long long)arg1;
- (void)setPool:(id)arg1;
- (void)setPurgeableSize:(unsigned long long)arg1;
- (void)setResidentSize:(unsigned long long)arg1;
- (void)setWiredSize:(unsigned long long)arg1;
- (unsigned long long)wiredSize;

@end
