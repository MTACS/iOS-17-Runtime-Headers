
@interface ABPKTime : NSObject

+ (double)CMTimeToSeconds:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (double)machAbsoluteTimeToSeconds:(unsigned long long)arg1;
+ (unsigned long long)nowAsMachAbsoluteTime;
+ (double)nowInSeconds;

@end
