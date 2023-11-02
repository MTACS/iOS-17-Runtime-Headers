
@protocol ECLocalMessageActionBuilder <NSObject>

@required

- (NSURL *)mailboxURL;
- (NSString *)messageActionPersistentID;
- (void)setMailboxURL:(NSURL *)arg1;
- (void)setMessageActionPersistentID:(NSString *)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)userInitiated;

@end
