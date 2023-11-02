
@interface IMImageUtilities : NSObject

+ (struct CGContext { }*)_newBitmapContextWithTargetSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGImage { }*)_newUncroppedPreviewImageFromImage:(struct CGImage { }*)arg1 maximumSizeInPx:(struct CGSize { double x1; double x2; })arg2;
+ (bool)imageIsSubjectLift:(struct CGImage { }*)arg1;
+ (struct CGSize { double x1; double x2; })imageRefPxSize:(struct CGImage { }*)arg1;
+ (struct CGSize { double x1; double x2; })imageSourcePxSize:(struct CGImageSource { }*)arg1;
+ (bool)isCroppingAvoidanceEnabled;
+ (struct CGImage { }*)newThumbnailForTargetSize:(struct CGSize { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageSource:(struct CGImageSource { }*)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6;
+ (struct CGImage { }*)newThumbnailForTargetSize:(struct CGSize { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageSource:(struct CGImageSource { }*)arg3 mode:(long long)arg4 scale:(double)arg5;
+ (struct CGImage { }*)newUncroppedPreviewImageFromImage:(struct CGImage { }*)arg1 isScreenshot:(bool)arg2 maximumSizeInPx:(struct CGSize { double x1; double x2; })arg3 minimumSizeInPx:(struct CGSize { double x1; double x2; })arg4;
+ (bool)persistCPBitmapWithImage:(struct CGImage { }*)arg1 url:(id)arg2;
+ (bool)persistPreviewToDiskCache:(struct CGImage { }*)arg1 previewURL:(id)arg2 error:(id*)arg3;
+ (void)sampleImageEdges:(char *)arg1 usingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forMostlyWhitePixels:(unsigned long long*)arg3 mostlyTransparentPixels:(unsigned long long*)arg4 otherPixels:(unsigned long long*)arg5 sampledPixels:(unsigned long long*)arg6 bytesPerRow:(long long)arg7;
+ (void)sampleImageEdges:(char *)arg1 usingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 bytesPerRow:(long long)arg5;
+ (double)scaleFactorForThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 targetPxSize:(struct CGSize { double x1; double x2; })arg3 shouldScaleUpPreview:(bool)arg4 maxUpScale:(double)arg5;
+ (bool)shouldCropImageOfSize:(struct CGSize { double x1; double x2; })arg1 maximumSizeInPx:(struct CGSize { double x1; double x2; })arg2 minimumSizeInPx:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGSize { double x1; double x2; })uncroppedPreviewImageSizeFromImageSizeInPx:(struct CGSize { double x1; double x2; })arg1 maximumSizeInPx:(struct CGSize { double x1; double x2; })arg2;

@end
