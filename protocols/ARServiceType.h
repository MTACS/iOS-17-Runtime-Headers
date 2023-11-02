
@protocol ARServiceType <ARNamedService>

@required

+ (bool)isSupported;
+ (bool)isUnique;

- (NSString *)clientBundleIdentifier;
- (int)clientProcessIdentifier;
- (NSString *)clientProcessName;
- (<ARDaemonServiceDataSource> *)dataSource;
- (<ARDaemonServiceDelegate> *)delegate;
- (void)invalidate;
- (bool)isActive;
- (void)resume;
- (void)setActive:(bool)arg1;
- (void)setDataSource:(id <ARDaemonServiceDataSource>)arg1;
- (void)setDelegate:(id <ARDaemonServiceDelegate>)arg1;
- (void)suspend;

@end
