
@interface VMUVMRegionIdentifier : NSObject {
    bool  _hasFractionalPageSizes;
    NSMapTable * _mallocZoneStatisticsMap;
    NSMutableArray * _regions;
    VMUTask * _task;
    VMUTaskThreadStates * _threadStates;
}

@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } summaryStatisticsOfAllZones;
@property (nonatomic, readonly) NSArray *zoneNames;

+ (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 inSortedRegions:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)_computeStatistics:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; }*)arg1;
- (int)_recordRegionsAroundAddress:(unsigned long long)arg1 regionDescriptionOptions:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; })computedStatisticsForZoneWithName:(id)arg1;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned int)arg2;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 memorySizeDivisor:(unsigned int)arg4;
- (bool)hasFractionalPageSizes;
- (id)init;
- (id)initWithGraph:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1 pid:(int)arg2 options:(unsigned long long)arg3;
- (id)initWithVMUTask:(id)arg1 options:(unsigned long long)arg2;
- (id)nonSubmapRegionContainingAddress:(unsigned long long)arg1;
- (id)regions;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; })summaryStatisticsOfAllZones;
- (id)taskThreadStates;
- (id)zoneNames;

@end
