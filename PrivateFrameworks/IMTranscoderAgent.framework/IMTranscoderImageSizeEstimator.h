
@interface IMTranscoderImageSizeEstimator : NSObject {
    double  _normalizedInputFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
}

+ (id)newEstimatorWithURL:(id)arg1 uti:(id)arg2 imageSource:(struct CGImageSource { }*)arg3;

- (double)_estimatedBytesPerPixelForJPEGQuality:(double)arg1;
- (struct CGSize { double x1; double x2; })_newSizeForMaximumDimension:(long long)arg1 originalSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_nominalBytesPerPixelForUTI:(id)arg1;
- (double)_normalizedInputFactorForUTI:(id)arg1 bytesPerPixel:(double)arg2;
- (unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;
- (id)initWithUTI:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (id)initWithUTI:(id)arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 fileSize:(unsigned long long)arg3;

@end
