
@protocol FPMemoryObject <NSObject, NSCopying>

@required

- (NSDictionary *)auxData;
- (NSString *)auxDataName;
- (unsigned long long)cleanSize;
- (bool)containsFakeRegion;
- (bool)couldHaveProcessView;
- (NSDictionary *)detailedAuxData;
- (NSString *)detailedAuxDataName;
- (NSString *)detailedName;
- (unsigned long long)dirtySize;
- (FPMemoryObject *)ensureMemoryObject;
- (bool)finalizeObject;
- (NSString *)fullName;
- (NSArray *)memoryRegions;
- (NSString *)name;
- (int)ownerPid;
- (unsigned long long)reclaimableSize;
- (unsigned long long)swappedSize;
- (bool)verbose;
- (<FPMemoryObject> *)viewForProcess:(FPProcess *)arg1;
- (unsigned long long)wiredSize;

@end
