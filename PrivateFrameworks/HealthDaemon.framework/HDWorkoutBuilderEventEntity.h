
@interface HDWorkoutBuilderEventEntity : HDWorkoutEventEntity

+ (id)databaseTable;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (id)workoutEventsWithWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
