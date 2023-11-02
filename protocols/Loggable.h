
@protocol Loggable <NSObject>

@required

- (NSObject<OS_os_log> *)getLogger;

@end
