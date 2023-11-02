
@protocol PUEditPluginSessionDelegate <NSObject>

@optional

- (void)editPluginSession:(PUEditPluginSession *)arg1 didEndWithCompletionType:(unsigned long long)arg2 forPluginIdentifier:(NSString *)arg3;
- (void)editPluginSessionAvailabilityDidChange:(PUEditPluginSession *)arg1;
- (void)editPluginSessionWillBegin:(PUEditPluginSession *)arg1;

@end
