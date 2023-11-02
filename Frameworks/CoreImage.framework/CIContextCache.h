
@interface CIContextCache : NSObject

+ (long long)countAllocated;
+ (long long)currentNonVolatileSize;
+ (float)fillTime;
+ (id)peakNonVolatileList;
+ (long long)peakNonVolatileSize;
+ (void)resetStatistics;

@end
