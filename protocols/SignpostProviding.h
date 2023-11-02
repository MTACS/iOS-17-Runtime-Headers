
@protocol SignpostProviding <NSObject>

@required

+ (NSObject<OS_os_log> *)signpostLog;

- (unsigned long long)signpostID;

@end
