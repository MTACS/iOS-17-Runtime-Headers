
@interface IMDDatabaseLegacyXPCBridge : NSObject

- (id)_attachmentRecordsCopiedFromXPCArray:(id)arg1;
- (id)_chatRecordsCopiedFromXPCArray:(id)arg1;
- (id)_codableDictionaryCopiedFromXPCDictionary:(id)arg1 objectClass:(Class)arg2;
- (id)_codableObjectsCopiedFromXPCArray:(id)arg1 objectClass:(Class)arg2;
- (id)_messageRecordsCopiedFromXPCArray:(id)arg1;
- (id)_xpcArrayWithAttachmentRecords:(id)arg1;
- (id)_xpcArrayWithChatRecords:(id)arg1;
- (id)_xpcArrayWithCodableObjects:(id)arg1;
- (id)_xpcArrayWithMessageRecords:(id)arg1;
- (id)_xpcDictionaryWithCodableObjects:(id)arg1;

@end
