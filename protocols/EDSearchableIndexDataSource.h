
@protocol EDSearchableIndexDataSource <NSObject>

@required

- (NSArray *)childIdentifiersToRemoveFromSearchableIndex:(EDSearchableIndex *)arg1 whenRemovingParentIdentifiers:(NSArray *)arg2;
- (void)clearOrphanedSearchableMessagesFromDatabase;
- (NSSet *)distinctTransactionIDsForSearchableIndex:(EDSearchableIndex *)arg1;
- (long long)indexingTypeForSearchableIndex:(EDSearchableIndex *)arg1 item:(id <EDIndexableItem>)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(NSArray *)arg3;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 assignTransaction:(long long)arg2 updates:(EDSearchableIndexUpdates *)arg3;
- (void)searchableIndex:(EDSearchableIndex *)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 invalidateItemsInTransactions:(NSArray *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 willRemoveIdentifiers:(NSArray *)arg2 type:(long long)arg3;
- (EDSearchableIndexUpdates *)updatesForSearchableIndex:(EDSearchableIndex *)arg1 excludingIdentifiers:(NSArray *)arg2 count:(unsigned long long)arg3 cancelationToken:(EFCancelationToken *)arg4;
- (NSDictionary *)verificationDataSamplesForSearchableIndex:(EDSearchableIndex *)arg1 count:(unsigned long long)arg2 lastVerifiedMessageID:(long long)arg3;

@optional

- (void)indexRichLinksForMessageWithIdentifier:(NSString *)arg1 immediately:(bool)arg2;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 attachmentItemsForMessageWithIdentifier:(NSString *)arg2;
- (void)searchableIndex:(EDSearchableIndex *)arg1 foundAttachmentPaths:(NSArray *)arg2 forMessagePersistentID:(NSString *)arg3;
- (void)searchableIndex:(EDSearchableIndex *)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(NSString *)arg2;
- (NSArray *)searchableIndex:(EDSearchableIndex *)arg1 richLinkItemsForMessageWithIdentifier:(NSString *)arg2;

@end
