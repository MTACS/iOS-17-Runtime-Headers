
@interface FPMemoryObject : NSObject <FPMemoryObject> {
    bool  _accurateSizes;
    unsigned long long  _cleanSize;
    unsigned long long  _dirtySize;
    NSMutableArray * _memoryRegions;
    int  _ownerPid;
    NSMutableDictionary * _processMemoryRegions;
    FPRangeList * _rangeList;
    unsigned long long  _reclaimableSize;
    unsigned long long  _swappedSize;
    unsigned long long  _wiredSize;
}

@property (nonatomic, readonly) NSDictionary *auxData;
@property (nonatomic, readonly) NSString *auxDataName;
@property (nonatomic, readonly) unsigned long long cleanSize;
@property (nonatomic, readonly) bool containsFakeRegion;
@property (nonatomic, readonly) bool couldHaveProcessView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *detailedAuxData;
@property (nonatomic, readonly) NSString *detailedAuxDataName;
@property (nonatomic, readonly) NSString *detailedName;
@property (nonatomic, readonly) unsigned long long dirtySize;
@property (nonatomic, readonly) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *memoryRegions;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) int ownerPid;
@property (nonatomic, readonly) unsigned long long reclaimableSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long swappedSize;
@property (nonatomic, readonly) bool verbose;
@property (nonatomic, readonly) unsigned long long wiredSize;

- (void).cxx_destruct;
- (id)auxData;
- (id)auxDataName;
- (unsigned long long)cleanSize;
- (bool)containsFakeRegion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)couldHaveProcessView;
- (id)detailedAuxData;
- (id)detailedAuxDataName;
- (id)detailedName;
- (unsigned long long)dirtySize;
- (id)ensureMemoryObject;
- (bool)finalizeObject;
- (id)fullName;
- (id)init;
- (id)memoryRegions;
- (id)name;
- (int)ownerPid;
- (unsigned long long)reclaimableSize;
- (void)setOwnerPid:(int)arg1;
- (unsigned long long)swappedSize;
- (bool)verbose;
- (id)viewForProcess:(id)arg1;
- (unsigned long long)wiredSize;

@end
