
@protocol NPKTransientPassAssertionServerClientProtocol <NSObject>

@required

- (void)didEnterFieldForPassesWithUniqueIDs:(NSArray *)arg1;
- (void)handleDelegatedDoublePressEvent;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(NSString *)arg1;

@end
