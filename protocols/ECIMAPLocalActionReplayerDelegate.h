
@protocol ECIMAPLocalActionReplayerDelegate <ECLocalActionReplayerDelegate>

@required

- (bool)checkUIDValidity:(unsigned int)arg1 mailboxURL:(NSURL *)arg2;
- (bool)errorIsIMAPError:(NSError *)arg1;
- (NSDictionary *)flagsForIMAPUIDs:(NSIndexSet *)arg1 mailboxURL:(NSURL *)arg2;
- (NSString *)imapMailboxNameForMailboxURL:(NSURL *)arg1;
- (NSData *)messageDataForRemoteID:(NSString *)arg1 mailboxURL:(NSURL *)arg2;

@end
