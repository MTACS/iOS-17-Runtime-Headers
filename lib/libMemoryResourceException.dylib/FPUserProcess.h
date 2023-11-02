
@interface FPUserProcess : FPProcess {
    bool  _bailedOut;
    int  _cachedDisposition;
    unsigned long long  _cachedDispositionAddress;
    NSMutableArray * _images;
    unsigned long long  _ledgers;
    NSMutableDictionary * _ownedVmObjects;
    FPMemoryRegion * _pendingUnusedSharedRegion;
    unsigned int  _task;
}

@property (nonatomic, readonly) unsigned long long physFootprint;
@property (nonatomic, readonly) unsigned int task;

- (void).cxx_destruct;
- (void)_addSubrangesForRegion:(id)arg1 purgeState:(int)arg2;
- (bool)_configurePageSize;
- (void)_gatherIdleExitStatus;
- (void)_gatherImageData;
- (void)_gatherIsTranslated;
- (void)_gatherLedgers;
- (id)_gatherOwnedVmObjects;
- (void)_gatherPhysFootprint;
- (void)_gatherSharedCacheFromDyldSnapshot:(struct dyld_process_snapshot_s { }*)arg1;
- (bool)_isAlive;
- (bool)_populateMemoryRegionWithPageQueries:(id)arg1 regionInfo:(struct vm_region_submap_info_64 { int x1; int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned char x12; unsigned char x13; int x14; int x15; unsigned int x16; unsigned short x17; unsigned int x18; unsigned long long x19; }*)arg2;
- (bool)_populateTask;
- (void)_setIdleExitStatusFromDirtyFlags:(unsigned int)arg1;
- (id)auxData;
- (void)dealloc;
- (void)enumerateRegions:(id /* block */)arg1;
- (void)gatherData;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[32]; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; int x20; unsigned long long x21; unsigned long long x22; }*)arg1;
- (unsigned long long)physFootprint;
- (unsigned int)task;

@end
