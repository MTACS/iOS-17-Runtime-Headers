
@interface MAIgnoreProgressReporter : MAProgressReporter

- (id)childProgressReporterForStep:(unsigned long long)arg1 outOf:(unsigned long long)arg2;
- (id)childProgressReporterFromStart:(double)arg1 toEnd:(double)arg2;
- (id)init;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;

@end
