
@protocol WRWidgetRendererServiceXPCClient

@required

- (oneway void)clientConfigurationsDidChange:(CHSWidgetConfiguration *)arg1 forHost:(NSString *)arg2;
- (oneway void)extensionsDidChange:(CHSWidgetExtensionsBox *)arg1;
- (oneway void)flushPowerlog;
- (oneway void)initializeConnection:(WRWidgetRendererInitializationPayload *)arg1;
- (oneway void)placeholdersDidChange:(NSArray<__CHSWidgetKey__> *)arg1;
- (oneway void)snapshotsDidChange:(NSArray<__CHSWidgetKey__> *)arg1;
- (oneway void)systemEnvironmentDidChange:(NSData *)arg1;
- (oneway void)timelinesDidChange:(NSArray<__CHSWidgetKey__> *)arg1;

@end
