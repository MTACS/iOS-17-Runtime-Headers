
@protocol BAClientSystemXPCProtocol <NSObject>

@required

- (void)receiveAppStoreProgressWithAppBundleIdentifier:(NSString *)arg1 progressInfo:(id <BAAppStoreProgressInfo>)arg2;

@end
