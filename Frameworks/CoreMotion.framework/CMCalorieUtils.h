
@interface CMCalorieUtils : NSObject

+ (struct CLBodyMetrics { int x1; int x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; int x11; float x12; bool x13; float x14; bool x15; bool x16; bool x17; })CLBodyMetricsFromCMCalorieUserInfo:(id)arg1 error:(id*)arg2;
+ (bool)isAvailable;
+ (id)lookupCalorieDataForCMWorkoutType:(long long)arg1 duration:(double)arg2 error:(id*)arg3;
+ (id)lookupCalorieDataForCMWorkoutType:(long long)arg1 duration:(double)arg2 userInfo:(id)arg3 error:(id*)arg4;

@end
