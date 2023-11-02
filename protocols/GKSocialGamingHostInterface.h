
@protocol GKSocialGamingHostInterface <NSObject>

@required

- (oneway void)extensionWillFinish;

@optional

- (oneway void)extensionDidTerminateWithError:(NSError *)arg1;

@end
