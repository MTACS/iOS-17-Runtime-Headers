
@interface FBKBugFormAttachmentPreview : NSObject

+ (id)URLByRemovingInvalidExtensions:(id)arg1;
+ (bool)canPreviewItem:(id)arg1;
+ (bool)extensionIsTextFile:(id)arg1;
+ (bool)hasIps_dot_synced:(id)arg1;
+ (bool)hasLog_dot_number:(id)arg1;
+ (id)previewTypeURL:(id)arg1;
+ (id)textFileForString:(id)arg1 withFileName:(id)arg2;
+ (id)textFileForURL:(id)arg1;
+ (bool)urlPointsToTextFile:(id)arg1;

@end
