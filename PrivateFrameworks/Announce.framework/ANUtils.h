
@interface ANUtils : NSObject

+ (id)an_dateFormatterForFilename;
+ (bool)isHomeAppInstalled;
+ (bool)isInternalBuild;
+ (double)machTimeToSeconds:(unsigned long long)arg1;
+ (unsigned long long)secondsToMachTime:(double)arg1;

@end
