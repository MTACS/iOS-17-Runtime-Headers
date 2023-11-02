
@protocol _INPBPauseTimerIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasPauseMultiple;
- (bool)hasTargetTimer;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)pauseMultiple;
- (void)setHasPauseMultiple:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPauseMultiple:(bool)arg1;
- (void)setTargetTimer:(_INPBTimer *)arg1;
- (_INPBTimer *)targetTimer;

@end
