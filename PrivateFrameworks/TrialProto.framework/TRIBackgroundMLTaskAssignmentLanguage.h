
@interface TRIBackgroundMLTaskAssignmentLanguage : TRIPBMessage

@property (nonatomic, retain) TRIPBUInt32Array *bucketArray;
@property (nonatomic, readonly) unsigned long long bucketArray_Count;
@property (nonatomic, copy) NSString *factorPackId;
@property (nonatomic, copy) NSString *factorPackSetId;
@property (nonatomic) bool hasFactorPackId;
@property (nonatomic) bool hasFactorPackSetId;
@property (nonatomic, retain) NSMutableArray *predicateArray;
@property (nonatomic, readonly) unsigned long long predicateArray_Count;

+ (id)descriptor;

@end
