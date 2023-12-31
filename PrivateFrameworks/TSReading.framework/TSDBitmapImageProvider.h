
@interface TSDBitmapImageProvider : TSDImageProvider {
    long long  mCheckIfValidToken;
    unsigned long long  mDPI;
    struct CGImage { } * mHalfSizeImage;
    struct CGImage { } * mImage;
    unsigned long long  mImageGamut;
    NSObject<OS_dispatch_semaphore> * mImageLock;
    struct CGImageSource { } * mImageSource;
    bool  mIsOpaque;
    bool  mIsValid;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    long long  mOrientation;
    struct CGImage { } * mQuarterSizeImage;
}

+ (struct CGImage { }*)CGImageForImageData:(id)arg1;
+ (id)TSUImageForImageData:(id)arg1;
+ (void)clearCacheForData:(id)arg1;
+ (void)initialize;
+ (struct CGSize { double x1; double x2; })naturalSizeForImageData:(id)arg1;
+ (id)p_cacheStringForData:(id)arg1;
+ (struct CGImageSource { }*)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2;
+ (struct CGImageSource { }*)p_newImageSourceFromFilePath:(id)arg1;
+ (struct CGImage { }*)temporaryCGImageForImageData:(id)arg1;
+ (struct CGImageSource { }*)temporaryCGImageSourceForImageData:(id)arg1;

- (struct CGImage { }*)CGImageForNaturalSize;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2 orLayer:(id)arg3;
- (struct CGImage { }*)CGImageForSize:(struct CGSize { double x1; double x2; })arg1 lowQuality:(bool)arg2;
- (struct CGImageSource { }*)CGImageSource;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })dpiAdjustedFillSize;
- (struct CGSize { double x1; double x2; })dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)flush;
- (bool)hasFlushableContent;
- (void)i_commonInit;
- (unsigned long long)imageDPI;
- (unsigned long long)imageGamut;
- (bool)isOpaque;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })naturalSize;
- (long long)orientation;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource { }*)arg1 andImage:(struct CGImage { }*)arg2;
- (void)p_loadFullSizedImageIfNecessary;
- (void)p_loadImageMetadata;
- (struct CGImage { }*)p_loadOrCreateResampledImageWithScale:(unsigned long long)arg1 andCGImage:(struct CGImage {}**)arg2;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImageSource { }*)p_newCGImageSource;
- (struct CGImageSource { }*)p_newCGImageSourceForTemporaryUse;
- (struct CGImage { }*)p_newImageFromSource:(struct CGImageSource { }*)arg1;
- (struct CGImageSource { }*)p_newImageOfSize:(struct CGSize { double x1; double x2; })arg1 andWriteToCacheWithSuffix:(id)arg2;
- (struct CGImage { }*)p_resampledImageOfSizeType:(int)arg1;

@end
