
@interface PLTableThumbnailEncoder : NSObject

+ (struct CGImage { }*)_createDownscaledImageFromSource:(struct CGImageSource { }*)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 cropped:(bool)arg3;
+ (struct CGImage { }*)_createDownscaledImageFromSourceImage:(struct CGImage { }*)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 cropped:(bool)arg3;
+ (id)_encodeDownscaledImage:(struct CGImage { }*)arg1 toFormat:(id)arg2 withUUID:(id)arg3 error:(id*)arg4;
+ (struct CGImage { }*)createCascadeSeedImageFromSourceImage:(struct CGImage { }*)arg1 toFormats:(id)arg2;
+ (id)encodeThumbnailImage:(struct CGImage { }*)arg1 toFormat:(id)arg2 withUUID:(id)arg3 error:(id*)arg4;
+ (id)encodeThumbnailImage:(struct CGImage { }*)arg1 toFormats:(id)arg2 withUUID:(id)arg3 error:(id*)arg4;
+ (id)encodeThumbnailSource:(struct CGImageSource { }*)arg1 toFormat:(id)arg2 withUUID:(id)arg3 error:(id*)arg4;
+ (id)encodeThumbnailSource:(struct CGImageSource { }*)arg1 toFormats:(id)arg2 withUUID:(id)arg3 error:(id*)arg4;
+ (struct CGSize { double x1; double x2; })smallestSizeThatFitsSourceSize:(struct CGSize { double x1; double x2; })arg1 withinFitFormat:(id)arg2 andLargerSquareFormat:(id)arg3;

@end
