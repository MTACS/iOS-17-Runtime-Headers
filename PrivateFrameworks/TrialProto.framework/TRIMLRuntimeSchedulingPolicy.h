
@interface TRIMLRuntimeSchedulingPolicy : TRIPBMessage

@property (nonatomic, retain) TRIPBTimestamp *endsAt;
@property (nonatomic) bool hasEndsAt;
@property (nonatomic) bool hasMaxEvaluations;
@property (nonatomic) bool hasPeriodicIntervalSeconds;
@property (nonatomic) bool hasQos;
@property (nonatomic) bool hasStartsAfter;
@property (nonatomic) unsigned int maxEvaluations;
@property (nonatomic) unsigned int periodicIntervalSeconds;
@property (nonatomic) int qos;
@property (nonatomic, retain) TRIPBTimestamp *startsAfter;

+ (id)descriptor;

@end
