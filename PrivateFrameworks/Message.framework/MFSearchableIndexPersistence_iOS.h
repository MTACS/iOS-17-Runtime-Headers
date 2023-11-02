
@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable, EFSignpostable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2;
- (id)additionalFilterClause;
- (void)allMailboxIdentifiersForMessage:(id)arg1 result:(id /* block */)arg2;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 attachmentPersistentID:(id)arg2 messagePersistentID:(id)arg3 name:(id)arg4 mailboxID:(long long)arg5 result:(id /* block */)arg6;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(long long)arg4 result:(id /* block */)arg5;
- (id)messagesWhere:(id)arg1 useSearchableRebuildTable:(bool)arg2 limit:(long long)arg3;
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
- (unsigned long long)signpostID;
- (id)statistics;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;

@end
