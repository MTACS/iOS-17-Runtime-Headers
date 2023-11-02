
@interface Trace : NSObject

+ (void)post:(unsigned int)arg1 arg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5;
+ (void)postEnd:(unsigned int)arg1 arg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5;
+ (void)postStart:(unsigned int)arg1 arg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5;

@end
