
@interface CKWalletMediaObjectMetadataHandler : NSObject

+ (id)colorDictionaryFromColor:(id)arg1;
+ (id)colorFromDictionaryRepresentation:(id)arg1;
+ (double)colorValueForKey:(id)arg1 inDictionary:(id)arg2;
+ (id)dictionaryRepresentationForText:(id)arg1 color:(id)arg2;
+ (id)dictionaryRepresentationForText:(id)arg1 optionalColor:(id)arg2;
+ (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 presentationProperties:(id)arg3;
+ (id)paddedImage:(id)arg1 horizontalPadding:(double)arg2 verticalPadding:(double)arg3;
+ (id)previewMetadataWithContentsOfURL:(id)arg1 error:(out id*)arg2;
+ (id)replyPreviewIconFromFullImage:(id)arg1;
+ (bool)writePreviewMetadata:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;

@end
