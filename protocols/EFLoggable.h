
@protocol EFLoggable <NSObject>

@required

+ (NSObject<OS_os_log> *)log;

@end
