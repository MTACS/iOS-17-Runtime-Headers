
@interface IMDDatabaseServer : IMDDatabaseLegacyXPCBridge

@property (nonatomic, readonly) <IMDRemoteDatabaseProtocol> *database;

+ (id)sharedServer;

- (void)_asyncPersistenceBlock:(id /* block */)arg1;
- (void)_authorizeOutgoingSandboxedResource:(id)arg1 connection:(id)arg2;
- (void)_respondWithAttachmentRecords:(id)arg1 responseMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_respondWithChatRecords:(id)arg1 responseMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_respondWithMessageRecords:(id)arg1 responseMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_syncPersistenceBlock:(id /* block */)arg1;
- (id)database;
- (void)handleDeleteAttachmentsDirectWithPredicate_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDAttachmentRecordCopyFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDAttachmentRecordsUpdateSyncStatusForGUIDs_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyChatsFilteredUsingPredicate_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyChatsSortedByLastMessageDateAndFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyChatsWithAtLeastHandlesOnServiceWithStyle_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyChatsWithHandlesOnServiceWithDisplayNameGroupIDStyle_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyChatsWithIdentifier_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyChatsWithPinningIdentifier_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopyGroupPhotoPaths_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordCopySortedChatsFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordLoadRecoverableMessages_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordMoveMessagesToRecoverableMessage_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordPermanentlyDeleteRecoverableMessagesInChatsWithGUIDs_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordRecoverMessages_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordResolveInconsistentGUID_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDChatRecordsUpdateSyncStatusForGUIDs_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDCoreSpotlightDeleteAttachment_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDKVIntegerForKey_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordClearUnsyncedRemovedRecoverableMessages_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordCopyLastMessageForChatWithRowID_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordCopyMessageWithGUIDExcludingRecoverableMessages_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordCopySortedMessagesForChatGUIDFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordDeleteJunkMessagesOlderThanDays_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordDeleteRecoverableMessagesOlderThanDays_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordLoadRecoverableMessagesPendingCloudKitDelete_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordLoadRecoverableMessagesPendingCloudKitUpdate_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordMoveToRecoverableMessage_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordStoreRecoverableMessagePartBody_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordUpdateAttachmentSyndicationRanges_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordUpdateMessagesSyndicationRanges_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordUpdateRecoverableMessageSyncStateForMessageGUIDs_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordUpdateRecoverableMessageSyncState_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordsUpdateSyncStatusForGUIDs_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDMessageRecordsUpdateSyncedSyndicationRangesForGUIDsToStatus_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleIMDNotificationsPostSharePlayNotification_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)notifyFirstUnlockComplete_IPCActionWithXPCConnection:(id)arg1 requestMessage:(id)arg2 responseMessage:(id)arg3 completionHandler:(id /* block */)arg4;

@end
