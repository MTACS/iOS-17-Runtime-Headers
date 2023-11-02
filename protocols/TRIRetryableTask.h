
@protocol TRIRetryableTask <TRITask>

@required

- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (void)setWasDeferred:(bool)arg1;
- (bool)wasDeferred;

@end
