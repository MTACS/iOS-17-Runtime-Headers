
@protocol ECIMAPServerInterface <NSObject>

@required

- (bool)appendData:(NSData *)arg1 toMailboxNamed:(NSString *)arg2 flags:(ECMessageFlags *)arg3 dateReceived:(NSDate *)arg4 appendInfo:(id*)arg5 error:(id*)arg6;
- (bool)copyUIDs:(NSIndexSet *)arg1 toMailboxNamed:(NSString *)arg2 copyInfo:(id*)arg3 error:(id*)arg4;
- (bool)expunge;
- (bool)expungeUIDs:(NSIndexSet *)arg1;
- (bool)hasValidConnection;
- (bool)moveUIDs:(NSIndexSet *)arg1 toMailboxNamed:(NSString *)arg2 copyInfo:(id*)arg3 error:(id*)arg4;
- (bool)storeFlagChange:(ECMessageFlagChange *)arg1 forUIDs:(NSIndexSet *)arg2;
- (bool)storeGmailLabels:(NSArray *)arg1 state:(bool)arg2 forUIDs:(NSIndexSet *)arg3;

@end
