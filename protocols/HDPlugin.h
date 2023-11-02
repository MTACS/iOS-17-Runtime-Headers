
@protocol HDPlugin <NSObject>

@required

- (<HDHealthDaemonExtension> *)extensionForHealthDaemon:(id <HDHealthDaemon>)arg1;
- (<HDProfileExtension> *)extensionForProfile:(HDProfile *)arg1;
- (NSString *)pluginIdentifier;

@optional

+ (bool)shouldLoadPluginForDaemon:(id <HDHealthDaemon>)arg1;

- (void)handleDatabaseObliteration;

@end
