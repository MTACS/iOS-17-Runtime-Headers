
@interface EDSkyAddMessageAttachmentsAndMigrateAttachmentsTableUpgradeStep : NSObject <EDTableUpgradeStep, EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)createMessageAttachmentsTableWithConnection:(id)arg1;
+ (bool)createNewAttachmentTableWithConnection:(id)arg1;
+ (bool)createNewSearchableAttachmentsTable:(id)arg1;
+ (bool)deleteAttachmentsTableWithConnection:(id)arg1;
+ (bool)deleteMessageAttachmentsTableWithConnection:(id)arg1;
+ (bool)insertAttachmentIntoAttachmentTableWithAttachmentMetadata:(id)arg1 connection:(id)arg2;
+ (bool)insertIntoMessageAttachmentTableGlobalMessageID:(id)arg1 attachmentMetadata:(id)arg2 attachmentID:(long long)arg3 connection:(id)arg4;
+ (id)log;
+ (int)runWithConnection:(id)arg1;
+ (int)runWithConnection:(id)arg1 dataProvider:(id)arg2;

@end
