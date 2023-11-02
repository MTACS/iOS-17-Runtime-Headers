
@interface TRIGroupedPredicate : TRIPBMessage

@property (nonatomic) bool hasLogicalOperator;
@property (nonatomic) int logicalOperator;
@property (nonatomic, retain) NSMutableArray *predicateGroupArray;
@property (nonatomic, readonly) unsigned long long predicateGroupArray_Count;
@property (nonatomic, retain) NSMutableArray *singlePredicateArray;
@property (nonatomic, readonly) unsigned long long singlePredicateArray_Count;

+ (id)descriptor;

@end
