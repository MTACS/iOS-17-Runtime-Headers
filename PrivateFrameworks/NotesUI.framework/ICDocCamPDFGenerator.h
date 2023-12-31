
@interface ICDocCamPDFGenerator : NSObject

+ (id)blockingGeneratePDFDataForAttachment:(id)arg1 withProgress:(id)arg2 queue:(id)arg3 error:(id*)arg4;
+ (id)blockingGeneratePDFURLForAttachment:(id)arg1 withProgress:(id)arg2 error:(id*)arg3;
+ (void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg1;
+ (void)deleteAllDocCamPDFs;
+ (void)deleteAllDocCamPasswordProtectedPDFs;
+ (void)deletePDFFolderIfExistsForAttachment:(id)arg1;
+ (void)deletePDFForAttachmentIfExists:(id)arg1;
+ (id)fileManager;
+ (id)fileQueue;
+ (id)folderPathForAttachment:(id)arg1;
+ (id)folderPathForAttachmentIdentifier:(id)arg1 passwordProtected:(bool)arg2;
+ (void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg1 displayWindow:(id)arg2 presentingViewController:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)pdfURLForAttachment:(id)arg1;
+ (void)performPDFGenerationWithGenerator:(id)arg1 galleryModel:(id)arg2 progress:(id)arg3;
+ (id)rootPDFFolderPath;
+ (id)rootPDFFolderPathForPWAttachments;
+ (id)syncGeneratorQueue;
+ (id)versionFolderPathForAttachment:(id)arg1;
+ (id)versionPDFPathForAttachment:(id)arg1;

@end
