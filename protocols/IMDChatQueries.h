
@protocol IMDChatQueries <NSObject>

@required

- (NSArray *)chatRecordsFilteredByPredicate:(NSPredicate *)arg1;
- (NSArray *)chatRecordsWithHandles:(NSArray *)arg1 serviceName:(NSString *)arg2 displayName:(NSString *)arg3 groupID:(NSString *)arg4 style:(unsigned char)arg5;
- (NSArray *)chatRecordsWithIdentifier:(NSString *)arg1;
- (void)fetchChatRecordsFilteredUsingPredicate:(void *)arg1 sortedUsingDescriptors:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchChatRecordsFilteredUsingPredicate:(void *)arg1 sortedUsingLastMessageDateAscending:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSPredicate *, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchChatRecordsFilteredUsingPredicate:(void *)arg1 sortedUsingLastMessageDateAscending:(void *)arg2 olderThan:(void *)arg3 limit:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSPredicate *, bool, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchChatRecordsWithAtLeastHandles:(void *)arg1 serviceName:(void *)arg2 style:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSString *, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchChatRecordsWithPinningIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchGroupPhotoPathsForChatsWithGroupIDs:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSDictionary *)loadRecoverableMessagesMetadataGroupedByChatGUID;
- (void)moveMessageRecordsToRecoveryForChatRecordsWithGUIDs:(NSArray *)arg1 deleteDate:(NSDate *)arg2;
- (void)recoverMessageRecordsForChatRecordsWithGUIDs:(NSArray *)arg1;
- (void)resolveInconsistentGUIDForChatRecordWithGUID:(void *)arg1 newGUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateChatsSyncStatusTo:(long long)arg1 forGUIDs:(NSArray *)arg2;

@end
