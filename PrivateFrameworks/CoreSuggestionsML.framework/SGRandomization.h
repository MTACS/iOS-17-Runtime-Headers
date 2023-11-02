
@interface SGRandomization : NSObject

+ (void)shuffleMutableArray:(id)arg1 inApproxEqualEpsilon:(double)arg2 withValueBlock:(id /* block */)arg3 withRng:(id)arg4;
+ (void)shuffleMutableArray:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withRng:(id)arg3;
+ (void)shuffleMutableArray:(id)arg1 withRng:(id)arg2;
+ (id)shuffledSamplingWithoutReplacementForK:(unsigned long long)arg1 fromN:(unsigned long long)arg2 withRng:(id)arg3;

@end
