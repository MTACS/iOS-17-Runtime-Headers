
@interface WDMedicalRecordPagingContext : NSObject {
    NSMutableSet * _computingDaySummaries;
    NSMutableArray * _contextDependentBlockQueue;
    bool  _fetchingCurrentPage;
    bool  _hasMoreData;
    bool  _pagingContextReady;
    NSMutableArray * _removedRecords;
    bool  _shouldClearDisplayItemGroups;
    NSMutableArray * _unprocessedRecords;
}

@property (nonatomic, retain) NSMutableSet *computingDaySummaries;
@property (nonatomic, retain) NSMutableArray *contextDependentBlockQueue;
@property (nonatomic) bool fetchingCurrentPage;
@property (nonatomic) bool hasMoreData;
@property (nonatomic) bool pagingContextReady;
@property (nonatomic, retain) NSMutableArray *removedRecords;
@property (nonatomic) bool shouldClearDisplayItemGroups;
@property (nonatomic, retain) NSMutableArray *unprocessedRecords;

+ (id)sortDateComponentsOfDate:(id)arg1;
+ (id)sortDateComponentsOfDateComponents:(id)arg1 withDayOffset:(long long)arg2;

- (void).cxx_destruct;
- (id)computingDaySummaries;
- (id)contextDependentBlockQueue;
- (bool)fetchingCurrentPage;
- (bool)hasMoreData;
- (id)init;
- (bool)pagingContextReady;
- (id)removedRecords;
- (void)resetPagingContext;
- (void)setComputingDaySummaries:(id)arg1;
- (void)setContextDependentBlockQueue:(id)arg1;
- (void)setFetchingCurrentPage:(bool)arg1;
- (void)setHasMoreData:(bool)arg1;
- (void)setPagingContextReady:(bool)arg1;
- (void)setRemovedRecords:(id)arg1;
- (void)setShouldClearDisplayItemGroups:(bool)arg1;
- (void)setUnprocessedRecords:(id)arg1;
- (bool)shouldClearDisplayItemGroups;
- (bool)shouldQueryForNextBatch;
- (id)unprocessedRecords;

@end
