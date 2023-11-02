
@interface PGConsistencyUtility : NSObject

+ (bool)_doubleValue:(double)arg1 isEqualTo:(double)arg2 toleranceFactor:(long long)arg3;
+ (bool)properties:(id)arg1 areConsistentWithProperties:(id)arg2 toleranceFactor:(long long)arg3;

@end
