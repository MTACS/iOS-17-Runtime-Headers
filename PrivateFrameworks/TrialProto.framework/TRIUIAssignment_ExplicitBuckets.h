
@interface TRIUIAssignment_ExplicitBuckets : TRIPBMessage

@property (nonatomic, retain) TRIPBUInt32Array *bucketArray;
@property (nonatomic, readonly) unsigned long long bucketArray_Count;

+ (id)descriptor;

@end
