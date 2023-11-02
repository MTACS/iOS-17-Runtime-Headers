
@protocol SBIconDelegate

@required

- (void)icon:(SBIcon *)arg1 launchFromLocation:(NSString *)arg2 context:(id <SBHIconLaunchContext>)arg3;

@optional

- (void)iconWantsUninstall:(SBIcon *)arg1;

@end
