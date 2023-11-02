
@protocol ASCSignpostGroup <NSObject>

@required

+ (NSString *)category;
+ (NSObject<OS_os_log> *)log;
+ (NSString *)subsystem;
+ (void)willEmitSignpostOfType:(long long)arg1 withName:(NSString *)arg2;

@end
