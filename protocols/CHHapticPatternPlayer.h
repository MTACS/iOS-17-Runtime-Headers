
@protocol CHHapticPatternPlayer <NSObject>

@required

- (bool)cancelAndReturnError:(id*)arg1;
- (bool)isMuted;
- (bool)scheduleParameterCurve:(CHHapticParameterCurve *)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)sendParameters:(NSArray *)arg1 atTime:(double)arg2 error:(id*)arg3;
- (void)setIsMuted:(bool)arg1;
- (bool)startAtTime:(double)arg1 error:(id*)arg2;
- (bool)stopAtTime:(double)arg1 error:(id*)arg2;

@end
