
@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledTargetRectForSize:(struct CGSize { double x1; double x2; })arg1 andThumbnailSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)generateAndPersistMetadataFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 balloonBundleID:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 outSize:(struct CGSize { double x1; double x2; }*)arg5 error:(id*)arg6;
+ (bool)generatesMetadata;
+ (bool)generatesPreview;
+ (double)maxUpScale;
+ (id)metadataExtension;
+ (struct CGImage { }*)newCroppedAndRescaledImageFromImage:(struct CGImage { }*)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 targetPxSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (id)previewExtension;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;
+ (struct CGSize { double x1; double x2; })thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
+ (bool)writesToDisk;

@end
