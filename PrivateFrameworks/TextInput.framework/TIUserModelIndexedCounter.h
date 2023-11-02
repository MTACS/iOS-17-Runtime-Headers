
@interface TIUserModelIndexedCounter : NSObject {
    NSMutableArray * _current;
    int  _dataType;
    NSString * _name;
    NSMutableArray * _persisted;
}

@property (nonatomic, readonly) NSNumber *aggregatedCount;
@property (nonatomic, readonly) int bucketCount;
@property (nonatomic, readonly) NSArray *counts;
@property (nonatomic, readonly) NSArray *currentCounts;
@property (nonatomic, readonly) int dataType;
@property (nonatomic, readonly) int days;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_createEmptyCountsArray;
- (id)aggregatedCount;
- (id)aggregatedCountForNumberOfDays:(int)arg1;
- (int)bucketCount;
- (id)counts;
- (id)countsForNumberOfDays:(int)arg1;
- (id)currentCounts;
- (int)dataType;
- (int)days;
- (void)doPersist:(id)arg1 forDate:(id)arg2 forContext:(id)arg3;
- (void)extendToNumberOfDays:(int)arg1;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)prepareBuckets;
- (void)updateWithDouble:(double)arg1 forIndex:(int)arg2;
- (void)updateWithInteger:(int)arg1 forIndex:(int)arg2;
- (void)updateWithLoadedInteger:(int)arg1 andDouble:(double)arg2 forIndex:(int)arg3 andDaysPrior:(int)arg4;

@end
