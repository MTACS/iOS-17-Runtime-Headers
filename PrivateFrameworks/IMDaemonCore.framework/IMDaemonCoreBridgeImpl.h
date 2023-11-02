
@interface IMDaemonCoreBridgeImpl : NSObject

+ (void)addItem:(id)arg1 toParentChatID:(id)arg2 updatedLastMessageCount:(unsigned long long)arg3;
+ (void)addTransfer:(id)arg1 forGUID:(id)arg2;
+ (id)ckRecordWithT1Info:(id)arg1;
+ (id)ckRecordWithT2Info:(id)arg1;
+ (id)createMessageItemWithRecordRef:(struct _IMDMessageRecordStruct { }*)arg1 handle:(id)arg2;
+ (id)fileTransferForGUID:(id)arg1;
+ (id)fileTransferWithGUID:(id)arg1;
+ (void)handleMessageUpdateWithCKRecord:(id)arg1;
+ (bool)isBackwardCompatibilityForItem:(id)arg1 parentChatID:(id)arg2;
+ (bool)isCompatibleWithMiCForItem:(id)arg1;
+ (void)moveMessagePartForGUID:(id)arg1 deleteDate:(id)arg2 partBody:(id)arg3;
+ (bool)registerGuid:(id)arg1 forLocalURL:(id)arg2;
+ (void)reloadDatabase;
+ (void)removeTransferFromBackup:(id)arg1;
+ (void)setSortIDForItem:(id)arg1 parentChatID:(id)arg2;
+ (bool)shouldStoreMessageForItem:(id)arg1;
+ (bool)storeAttachmentWithTransfer:(id)arg1 withChatGUID:(id)arg2;
+ (void)storeAttachmentWithTransfer:(id)arg1 withMessageGUID:(id)arg2;
+ (void)storeAttachmentsForMessage:(id)arg1;
+ (void)updateChatUsingSyncData:(id)arg1;
+ (void)updateLegacyTransferIfNeeded:(id)arg1;
+ (void)updateStamp;
+ (void)updateTransfer:(id)arg1;

@end
