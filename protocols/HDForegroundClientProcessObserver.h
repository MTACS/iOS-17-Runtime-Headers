
@protocol HDForegroundClientProcessObserver <NSObject>

@required

- (void)foregroundClientProcessesDidChange:(NSSet *)arg1 previouslyForegroundBundleIdentifiers:(NSSet *)arg2;

@end
