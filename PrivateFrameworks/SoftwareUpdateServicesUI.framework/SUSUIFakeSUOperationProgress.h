
@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (bool)isDone;
- (float)normalizedPercentComplete;
- (float)percentComplete;
- (id)phase;
- (double)timeRemaining;

@end
