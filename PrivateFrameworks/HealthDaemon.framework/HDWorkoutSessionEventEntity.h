
@interface HDWorkoutSessionEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (Class)workoutEventClass;
+ (id)workoutEventsWithWorkoutSession:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
