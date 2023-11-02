
@interface TRIPersistedAllocationStatusCursor : TRIPBMessage

@property (nonatomic) bool hasLowerBoundExclusive;
@property (nonatomic, retain) TRIPBTimestamp *lowerBoundExclusive;

+ (id)descriptor;

@end
