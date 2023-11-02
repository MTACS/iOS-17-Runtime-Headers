
@protocol _INPBResumeWorkoutIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasWorkoutName;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setWorkoutName:(_INPBDataString *)arg1;
- (_INPBDataString *)workoutName;

@end
