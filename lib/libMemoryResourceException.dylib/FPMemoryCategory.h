
@interface FPMemoryCategory : NSObject {
    <FPMemoryObject> * _firstMemoryObject;
    bool  _isSummary;
    NSString * _name;
    unsigned long long  _totalCleanSize;
    unsigned long long  _totalDirtySize;
    unsigned long long  _totalReclaimableSize;
    unsigned int  _totalRegions;
    unsigned long long  _totalSwappedSize;
    unsigned long long  _totalWiredSize;
}

@property (nonatomic, readonly) NSDictionary *auxData;
@property (nonatomic, readonly) NSString *auxDataFullName;
@property (nonatomic, readonly) NSString *detailedName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned long long totalCleanSize;
@property (nonatomic) unsigned long long totalDirtySize;
@property (nonatomic) unsigned long long totalReclaimableSize;
@property (nonatomic) unsigned int totalRegions;
@property (nonatomic) unsigned long long totalSwappedSize;
@property (nonatomic) unsigned long long totalWiredSize;
@property (nonatomic, readonly) bool verbose;

- (void).cxx_destruct;
- (void)addMemoryObject:(id)arg1;
- (id)auxData;
- (id)auxDataFullName;
- (id)detailedName;
- (id)fullName;
- (id)init;
- (id)initSummary:(bool)arg1;
- (id)name;
- (void)setTotalCleanSize:(unsigned long long)arg1;
- (void)setTotalDirtySize:(unsigned long long)arg1;
- (void)setTotalReclaimableSize:(unsigned long long)arg1;
- (void)setTotalRegions:(unsigned int)arg1;
- (void)setTotalSwappedSize:(unsigned long long)arg1;
- (void)setTotalWiredSize:(unsigned long long)arg1;
- (unsigned long long)totalCleanSize;
- (unsigned long long)totalDirtySize;
- (unsigned long long)totalReclaimableSize;
- (unsigned int)totalRegions;
- (unsigned long long)totalSwappedSize;
- (unsigned long long)totalWiredSize;
- (bool)verbose;

@end
