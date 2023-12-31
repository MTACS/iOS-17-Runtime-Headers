
@interface DCIMImageUtilities : NSObject

+ (bool)generateThumbnailsFromData:(id)arg1 inputSize:(struct CGSize { double x1; double x2; })arg2 preCropLargeThumbnailSize:(struct CGSize { double x1; double x2; })arg3 postCropLargeThumbnailSize:(struct CGSize { double x1; double x2; })arg4 preCropSmallThumbnailSize:(struct CGSize { double x1; double x2; })arg5 postCropSmallThumbnailSize:(struct CGSize { double x1; double x2; })arg6 outSmallThumbnailImageRef:(struct CGImage {}**)arg7 outLargeThumbnailImageRef:(struct CGImage {}**)arg8 outLargeThumbnailJPEGData:(id*)arg9;

@end
