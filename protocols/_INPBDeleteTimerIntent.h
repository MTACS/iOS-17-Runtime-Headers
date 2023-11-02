
@protocol _INPBDeleteTimerIntent <NSObject>

@required

- (bool)deleteMultiple;
- (bool)hasDeleteMultiple;
- (bool)hasIntentMetadata;
- (bool)hasTargetTimer;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setDeleteMultiple:(bool)arg1;
- (void)setHasDeleteMultiple:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetTimer:(_INPBTimer *)arg1;
- (_INPBTimer *)targetTimer;

@end
