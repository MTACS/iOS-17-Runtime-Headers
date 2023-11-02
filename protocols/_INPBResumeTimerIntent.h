
@protocol _INPBResumeTimerIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasResumeMultiple;
- (bool)hasTargetTimer;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)resumeMultiple;
- (void)setHasResumeMultiple:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setResumeMultiple:(bool)arg1;
- (void)setTargetTimer:(_INPBTimer *)arg1;
- (_INPBTimer *)targetTimer;

@end
