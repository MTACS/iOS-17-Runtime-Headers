
@protocol ECTransferMessageActionBuilder <ECLocalMessageActionBuilder>

@required

- (NSURL *)destinationMailboxURL;
- (NSArray *)itemsToCopy;
- (NSArray *)itemsToDelete;
- (NSArray *)itemsToDownload;
- (void)setDestinationMailboxURL:(NSURL *)arg1;
- (void)setItemsToCopy:(NSArray *)arg1;
- (void)setItemsToDelete:(NSArray *)arg1;
- (void)setItemsToDownload:(NSArray *)arg1;
- (void)setSourceMailboxURL:(NSURL *)arg1;
- (void)setTransferType:(long long)arg1;
- (NSURL *)sourceMailboxURL;
- (long long)transferType;

@end
