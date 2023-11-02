
@interface TRIUIAssignment : TRIPBMessage

@property (nonatomic, readonly) int bucketingOneOfCase;
@property (nonatomic) bool control;
@property (nonatomic, retain) TRIUIAssignment_ExplicitBuckets *explicitBuckets;
@property (nonatomic) bool hasControl;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic) unsigned int numBuckets;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
