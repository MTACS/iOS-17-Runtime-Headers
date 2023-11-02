
@protocol ECTransferUndownloadedMessageActionBuilder <ECLocalMessageActionBuilder>

@required

- (NSURL *)destinationMailboxURL;
- (NSArray *)itemsToDelete;
- (NSString *)oldestPersistedRemoteID;
- (void)setDestinationMailboxURL:(NSURL *)arg1;
- (void)setItemsToDelete:(NSArray *)arg1;
- (void)setOldestPersistedRemoteID:(NSString *)arg1;
- (void)setSourceMailboxURL:(NSURL *)arg1;
- (void)setTransferType:(long long)arg1;
- (NSURL *)sourceMailboxURL;
- (long long)transferType;

@end
