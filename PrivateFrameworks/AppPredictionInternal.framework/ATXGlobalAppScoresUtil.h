
@interface ATXGlobalAppScoresUtil : NSObject

+ (int)dayOfWeekIndexFromDate:(id)arg1;
+ (id)getContextKeyForTimeOfDayIndex:(int)arg1 dayOfWeekIndex:(int)arg2 locationIndex:(int)arg3 bundleIdIndex:(int)arg4;
+ (id)initializeTrieAtPath:(id)arg1;
+ (id)loadCoreMLModelWithName:(id)arg1;
+ (int)locationTypeIndexFromRTLocationOfInterestType:(long long)arg1;
+ (id)normalizeValues:(id)arg1;
+ (int)timeOfDayIndexFromDate:(id)arg1;

@end
