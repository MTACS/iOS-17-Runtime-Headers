
@interface ICDocCamArchiveExporter : NSObject

+ (id)archivableImageForSubAttachent:(id)arg1;
+ (bool)archiveExportingEnabled;
+ (id)archiveGalleryImagesFromGallery:(id)arg1 toURL:(id)arg2;
+ (id)createZipArchiveOfImagesFromGalleryAttachment:(id)arg1;
+ (id)createZipArchiveOfImagesFromNote:(id)arg1;
+ (id)exportAsArchiveActivityWithBarButtonItem:(id)arg1 presentingVC:(id)arg2 fromGalleryAttachment:(id)arg3;
+ (id)exportAsArchiveActivityWithBarButtonItem:(id)arg1 presentingVC:(id)arg2 fromNote:(id)arg3;
+ (void)showActivityVCWithBarButtonItem:(id)arg1 presentingVC:(id)arg2 url:(id)arg3;
+ (void)showExportArchiveFromNote:(id)arg1 presentingViewController:(id)arg2 presentingBarButtonItem:(id)arg3;

@end
