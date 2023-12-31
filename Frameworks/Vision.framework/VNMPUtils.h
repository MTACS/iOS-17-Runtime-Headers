
@interface VNMPUtils : NSObject

+ (id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2;
+ (void)freeVImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1;
+ (double)getHostTime;
+ (unsigned long long)getHostTimeInNanos;
+ (long long)parseExifTimestamp:(id)arg1;

@end
