
@protocol TFFeedbackDataUpdateProxy

@required

- (void)didUpdateEntry:(TFFeedbackEntry *)arg1 toGroupInclusionBool:(bool)arg2;
- (void)didUpdateEntry:(TFFeedbackEntry *)arg1 toString:(NSString *)arg2 editInProgress:(bool)arg3;

@end
