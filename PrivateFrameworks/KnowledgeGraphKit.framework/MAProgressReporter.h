
@interface MAProgressReporter : NSObject

@property (readonly) bool isCancelled;

+ (id)ignoreProgress;
+ (id)progressReporterWithProgressBlock:(id /* block */)arg1;

- (id)childProgressReporterForStep:(unsigned long long)arg1 outOf:(unsigned long long)arg2;
- (id)childProgressReporterFromStart:(double)arg1 toEnd:(double)arg2;
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;
- (id)initForSubclasses;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1;
- (bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;
- (bool)isCancelledWithUnitsCompleted:(unsigned long long)arg1 outOf:(unsigned long long)arg2;
- (id)progressReportersForParallelOperationsWithCount:(unsigned long long)arg1;

@end
