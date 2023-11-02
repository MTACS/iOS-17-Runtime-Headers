
@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (bool)_getUncroppedSizeForImageAtURL:(id)arg1 scale:(double)arg2 withImageSizeInPx:(struct CGSize { double x1; double x2; })arg3 maximumSizeInPx:(struct CGSize { double x1; double x2; })arg4 minimumSizeInPx:(struct CGSize { double x1; double x2; })arg5 previewSize:(struct CGSize { double x1; double x2; }*)arg6 senderContext:(id)arg7;
+ (struct CGImage { }*)_newBlastdoorPreviewForFileAtURL:(id)arg1 senderContext:(id)arg2 maxPxWidth:(double)arg3 scale:(double)arg4 isScreenshot:(bool*)arg5 isMonoskiAsset:(bool*)arg6 stickerEffect:(id*)arg7 error:(id*)arg8;
+ (struct CGImage { }*)_newCroppedAndScaledImageWithImageSource:(struct CGImageSource { }*)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2;
+ (id)fetchUTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 balloonBundleID:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 outSize:(struct CGSize { double x1; double x2; }*)arg5 error:(id*)arg6;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (struct CGImage { }*)newThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 imagePxSize:(struct CGSize { double x1; double x2; })arg2 imageSource:(struct CGImageSource { }*)arg3 scale:(double)arg4;
+ (bool)writesToDisk;

@end
