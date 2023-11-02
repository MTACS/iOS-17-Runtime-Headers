
@interface SNDetectEventUtils : NSObject

+ (bool)checkEventHappenedWithinRecentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ofResult:(id)arg2 satisfyingThreshold:(double)arg3 resultToScalar:(id /* block */)arg4 mostRecentTimeOfEvent:(id*)arg5;
+ (bool)checkEventHappenedWithinRecentDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 state:(bool)arg2 stateTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 mostRecentTimeOfEvent:(id*)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })updateMostRecentTimeOfEvent:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 state:(bool)arg2 stateTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

- (id)init;

@end
