
@interface GEOThrottlerRequester : NSObject

+ (id)sharedRequester;

- (bool)_getTokenAndInfo:(id*)arg1 forRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg2 nextSafeRequestTime:(double*)arg3 availableRequestCount:(unsigned int*)arg4 error:(id*)arg5;
- (bool)allowRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4;
- (bool)getThrottleStateFor:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned int*)arg3 error:(id*)arg4;
- (id)getTokenOrInfoFor:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 nextSafeRequestTime:(double*)arg2 availableRequestCount:(unsigned int*)arg3 error:(id*)arg4;

@end
