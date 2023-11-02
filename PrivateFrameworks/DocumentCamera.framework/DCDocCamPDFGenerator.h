
@interface DCDocCamPDFGenerator : NSObject

+ (void)applicationWillTerminate:(id)arg1;
+ (id)blockingGeneratepdfURLForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 withProgress:(id)arg3 error:(id*)arg4;
+ (void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)arg1;
+ (void)createTmpDirectory:(id)arg1;
+ (void)deleteAllDocCamPDFs;
+ (void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)arg1;
+ (void)deletePDFForDocumentInfoCollectionIfExists:(id)arg1;
+ (id)fileManager;
+ (id)fileQueue;
+ (id)folderPathForDocumentInfoCollection:(id)arg1;
+ (id)folderPathForDocumentInfoCollectionIdentifier:(id)arg1;
+ (void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 displayWindow:(id)arg3 presentingViewController:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)initialize;
+ (id)pdfURLForDocumentInfoCollection:(id)arg1;
+ (void)performPDFGenerationWithGenerator:(id)arg1 docInfoCollection:(id)arg2 imageCache:(id)arg3 progress:(id)arg4;
+ (id)rootPDFFolderPath;
+ (id)syncGeneratorQueue;
+ (id)versionPDFPathForDocumentInfoCollection:(id)arg1;
+ (id)versionfolderPathForDocumentInfoCollection:(id)arg1;

@end
