
@interface DCMarkupUtilities : NSObject

+ (void)applyMarkupModelData:(id)arg1 documentInfo:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)applyReturnedMarkupURL:(id)arg1 documentInfo:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (id)createMarkupViewController;
+ (id)createProcessingMarkupViewControllerOutWindow:(id*)arg1;
+ (id)dataToEditForDocumentInfo:(id)arg1 imageCache:(id)arg2 includeMarkupModelData:(bool)arg3;
+ (id)dataToEditForDocumentInfo:(id)arg1 includeMarkupModelData:(bool)arg2 imageCache:(id)arg3 embedMarkupModelDataInImage:(bool)arg4;
+ (void)extractReturnedMarkupURL:(id)arg1 documentInfo:(id)arg2 completionBlock:(id /* block */)arg3;
+ (bool)hasPrivateImageMetadata:(id)arg1;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(bool)arg3;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2;
+ (id)markupModelDataFromData:(id)arg1;
+ (id)markupModelDataFromDataAtURL:(id)arg1;

@end
