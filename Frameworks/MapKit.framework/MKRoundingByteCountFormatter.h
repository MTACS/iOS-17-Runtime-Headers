
@interface MKRoundingByteCountFormatter : NSObject

+ (long long)roundByteCount:(long long)arg1 toNearest:(long long)arg2;
+ (id)stringFromByteCount:(long long)arg1 roundedToNearest:(long long)arg2;
+ (id)stringFromByteCountWithRoundingTo10MB:(long long)arg1;
+ (id)stringFromByteCountWithRoundingTo1MB:(long long)arg1;
+ (id)stringFromByteCountWithRoundingTo5MB:(long long)arg1;

@end
