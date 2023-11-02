
@interface MXMMachUtils : NSObject

+ (unsigned long long)_absoluteTimeWithNanoseconds:(double)arg1;
+ (double)_nanosecondsWithAbsoluteTime:(unsigned long long)arg1;
+ (double)_nanosecondsWithContinuousTime:(unsigned long long)arg1;
+ (id)_processNameWithBundleIdentifier:(id)arg1;
+ (struct mach_timebase_info { unsigned int x1; unsigned int x2; }*)_timebase;

@end
