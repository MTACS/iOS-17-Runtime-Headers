
@protocol SFPasswordSharingServiceDelegate

@required

- (void)service:(SFPasswordSharingService *)arg1 receivedNetworkInfo:(SFPasswordSharingInfo *)arg2;

@optional

- (bool)service:(SFPasswordSharingService *)arg1 shouldPromptForNetwork:(NSString *)arg2;

@end
