
@protocol ECLocalActionReplayerDelegate <NSObject>

@required

- (NSData *)messageDataForMessage:(id <ECMessage>)arg1;
- (bool)moveSupportedFromMailboxURL:(NSURL *)arg1 toURL:(NSURL *)arg2;

@end
