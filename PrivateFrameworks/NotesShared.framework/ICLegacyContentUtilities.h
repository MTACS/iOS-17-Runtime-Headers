
@interface ICLegacyContentUtilities : NSObject

+ (id)contentStringFromWebArchive:(id)arg1;
+ (id)createAttachmentFromWebResource:(id)arg1 inContext:(id)arg2;
+ (id)createAttachmentWithContentID:(id)arg1 mimeType:(id)arg2 data:(id)arg3 filename:(id)arg4 inContext:(id)arg5;
+ (id)generateContentID;
+ (id)newNoteBasedOnModernNote:(id)arg1 inFolder:(id)arg2 context:(id)arg3;
+ (id)suggestedFilenameForURL:(id)arg1 mimeType:(id)arg2;

@end
