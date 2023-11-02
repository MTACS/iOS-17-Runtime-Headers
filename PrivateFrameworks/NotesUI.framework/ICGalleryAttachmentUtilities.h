
@interface ICGalleryAttachmentUtilities : NSObject

+ (id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg1 fromDocuments:(id)arg2 imageCache:(id)arg3 context:(id)arg4;
+ (id)createSubAttachmentFromDocument:(id)arg1 imageCache:(id)arg2 galleryAttachment:(id)arg3;
+ (id)imageForSubAttachment:(id)arg1;
+ (id)imageForSubAttachment:(id)arg1 allowCached:(bool)arg2;
+ (id)imageForSubAttachment:(id)arg1 rotateForMacImageGallery:(bool)arg2 allowCached:(bool)arg3;
+ (double)requiredWidthForAttachment:(id)arg1 viewHeight:(double)arg2 maxWidth:(double)arg3;
+ (struct CGSize { double x1; double x2; })sizeOfSubAttachment:(id)arg1 forHeight:(double)arg2;
+ (struct CGSize { double x1; double x2; })sizeOfViewForAttachment:(id)arg1 textViewContentWidth:(double)arg2;

@end
