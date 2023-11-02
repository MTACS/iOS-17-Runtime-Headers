
@interface ICUnsupportedObjectPredicateHelper : NSObject

+ (id)predicateForSupportedAttachmentsInContext:(id)arg1;
+ (id)predicateForSupportedFoldersInContext:(id)arg1;
+ (id)predicateForSupportedInlineAttachmentsInContext:(id)arg1;
+ (id)predicateForSupportedNotesInContext:(id)arg1;
+ (void)recursivelyAddAttachment:(id)arg1 toMutableSet:(id)arg2;
+ (void)recursivelyAddFolder:(id)arg1 toMutableSet:(id)arg2;
+ (id)unitTest_unsupportedAttachmentIdentifiersWithContext:(id)arg1;
+ (id)unitTest_unsupportedFolderIdentifiersWithContext:(id)arg1;
+ (id)unsupportedAttachmentIdentifiersWithContext:(id)arg1;
+ (id)unsupportedFolderIdentifiersWithContext:(id)arg1;
+ (id)unsupportedInlineAttachmentIdentifiersWithContext:(id)arg1;

@end
