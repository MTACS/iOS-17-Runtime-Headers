
@interface ICLegacyNoteUtilities : NSObject

+ (void)copyValuesFromLegacyNote:(id)arg1 toNote:(id)arg2 styler:(id)arg3 attachmentPreviewGenerator:(id)arg4;
+ (void)importLegacyNote:(id)arg1 temporaryTextStorage:(id)arg2 toNote:(id)arg3 attachmentPreviewGenerator:(id)arg4;
+ (id)temporaryTextStorageWithAttributedString:(id)arg1 replicaID:(id)arg2 styler:(id)arg3;

@end
