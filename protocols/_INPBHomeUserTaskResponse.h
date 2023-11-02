
@protocol _INPBHomeUserTaskResponse <NSObject>

@required

- (int)StringAsTaskOutcome:(NSString *)arg1;
- (bool)hasTaskOutcome;
- (bool)hasUserTask;
- (void)setHasTaskOutcome:(bool)arg1;
- (void)setTaskOutcome:(int)arg1;
- (void)setUserTask:(_INPBHomeUserTask *)arg1;
- (int)taskOutcome;
- (NSString *)taskOutcomeAsString:(int)arg1;
- (_INPBHomeUserTask *)userTask;

@end
