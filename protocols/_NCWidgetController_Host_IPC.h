
@protocol _NCWidgetController_Host_IPC

@required

- (void)__requestRefreshAfterDate:(NSDate *)arg1 forWidgetWithBundleIdentifier:(NSString *)arg2;
- (void)__setHasContent:(bool)arg1 forWidgetWithBundleIdentifier:(NSString *)arg2;

@end
