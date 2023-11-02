
@protocol _INPBSetTimerAttributeIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasTargetTimer;
- (bool)hasToDuration;
- (bool)hasToLabel;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setHasToDuration:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetTimer:(_INPBTimer *)arg1;
- (void)setToDuration:(double)arg1;
- (void)setToLabel:(_INPBDataString *)arg1;
- (_INPBTimer *)targetTimer;
- (double)toDuration;
- (_INPBDataString *)toLabel;

@end
