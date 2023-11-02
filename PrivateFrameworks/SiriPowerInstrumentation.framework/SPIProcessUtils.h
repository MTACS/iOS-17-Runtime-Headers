
@interface SPIProcessUtils : NSObject

+ (unsigned char)getProcessForPid:(int)arg1;
+ (id)getProcessNameForPid:(int)arg1;
+ (int)getUsageForPid:(int)arg1 withOutput:(struct SPIResourceUsage { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2;

@end
