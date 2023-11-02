
@protocol SHService <NSObject>

@required

+ (void)initializeGlobalServiceState;
+ (NSString *)machServiceName;

- (<SHServiceDelegate> *)serviceDelegate;
- (void)setServiceDelegate:(id <SHServiceDelegate>)arg1;
- (void)stop;

@end
