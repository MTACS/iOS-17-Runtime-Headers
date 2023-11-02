
@protocol _INPBResetTimerIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasResetMultiple;
- (bool)hasTargetTimer;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)resetMultiple;
- (void)setHasResetMultiple:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setResetMultiple:(bool)arg1;
- (void)setTargetTimer:(_INPBTimer *)arg1;
- (_INPBTimer *)targetTimer;

@end
