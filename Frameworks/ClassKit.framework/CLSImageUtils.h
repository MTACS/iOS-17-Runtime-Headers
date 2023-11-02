
@interface CLSImageUtils : CLSObject

+ (struct CGImage { }*)CGImageFromJPEGData:(id)arg1 error:(id*)arg2;
+ (id)JPEGDataForThumbnailForFileAtURL:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 scaleFactor:(double)arg3 error:(id*)arg4;
+ (id)JPEGDataFromCGImage:(struct CGImage { }*)arg1 desiredMinimumDimension:(unsigned long long)arg2 desiredMaximumDimension:(unsigned long long)arg3 error:(id*)arg4;
+ (id)JPEGDataFromCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
+ (struct CGSize { double x1; double x2; })sizeOfImageAtURL:(id)arg1;

@end
