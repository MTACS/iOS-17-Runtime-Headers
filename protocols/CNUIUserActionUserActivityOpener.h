
@protocol CNUIUserActionUserActivityOpener <NSObject>

@required

- (CNFuture *)openUserActivity:(NSUserActivity *)arg1 usingBundleIdentifier:(NSString *)arg2 withScheduler:(id <CNScheduler>)arg3;

@end
