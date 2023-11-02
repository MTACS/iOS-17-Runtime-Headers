
@interface TRIRolloutAssignment : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *factorPackIdArray;
@property (nonatomic, readonly) unsigned long long factorPackIdArray_Count;
@property (nonatomic, copy) NSString *factorPackSetId;
@property (nonatomic) bool hasFactorPackSetId;
@property (nonatomic, retain) NSMutableArray *predicateArray;
@property (nonatomic, readonly) unsigned long long predicateArray_Count;

+ (id)descriptor;

@end
