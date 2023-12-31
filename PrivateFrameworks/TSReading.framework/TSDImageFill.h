
@interface TSDImageFill : TSDFill <NSCopying, NSMutableCopying, TSDMixing, TSSPreset, TSSPresetSource> {
    struct CGSize { 
        double width; 
        double height; 
    }  mFillSize;
    TSUFlushableCachedImage * mHalfSizeTintedImage;
    bool  mHasIndicatedInterestInProvider;
    TSPData * mImageData;
    bool  mInterpretsUntaggedImageDataAsGeneric;
    TSPData * mOriginalImageData;
    TSUFlushableCachedImage * mQuarterSizeTintedImage;
    TSUColor * mReferenceColor;
    struct CGImage { } * mSourceOfTempRenderCopy;
    TSUFlushableCachedImage * mStandardSizeTintedImage;
    int  mTechnique;
    struct CGImage { } * mTempRenderCopy;
    long long  mTempRenderCount;
    NSObject<OS_dispatch_queue> * mTempRenderLock;
    TSUColor * mTintColor;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fillSize;
@property (nonatomic, readonly, retain) TSPData *imageData;
@property (nonatomic, readonly) bool interpretsUntaggedImageDataAsGeneric;
@property (nonatomic, readonly, retain) TSPData *originalImageData;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) double scale;
@property (nonatomic) int technique;
@property (nonatomic, readonly, copy) TSUColor *tintColor;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;

- (void)addBitmapsToRenderingQualityInfo:(id)arg1 forShapeRep:(id)arg2 inContext:(struct CGContext { }*)arg3;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (bool)canApplyToCALayer;
- (bool)canApplyToCALayerByAddingSublayers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInOneStep;
- (struct CGSize { double x1; double x2; })fillSize;
- (int)fillType;
- (unsigned long long)hash;
- (void)i_flushCaches;
- (id)imageData;
- (id)imageDataAtFillSize;
- (id)initWithGenericImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 originalImageData:(id)arg5;
- (id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 originalImageData:(id)arg5;
- (bool)interpretsUntaggedImageDataAsGeneric;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (SEL)mapThemeAssetSelector;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalImageData;
- (id)p_cachedImageForSize:(struct CGSize { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2 orLayer:(id)arg3;
- (void)p_drawBitmapImage:(struct CGImage { }*)arg1 withOrientation:(long long)arg2 inContext:(struct CGContext { }*)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)p_drawPDFWithProvider:(id)arg1 inContext:(struct CGContext { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_drawnRectForImageSize:(struct CGSize { double x1; double x2; })arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3;
- (id)p_halfSizeCachedImage;
- (struct CGImage { }*)p_newHalfSizeImage;
- (struct CGImage { }*)p_newQuarterSizeImage;
- (struct CGImage { }*)p_newStandardSizeImage;
- (struct CGImage { }*)p_newTintedImageWithScale:(double)arg1;
- (void)p_paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)p_quarterSizeCachedImage;
- (void)p_setFillSizeForApplicationData;
- (bool)p_shouldApplyTintedImage;
- (struct CGSize { double x1; double x2; })p_sizeOfFillImageForDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)p_standardSizeCachedImage;
- (id)p_validatedImageProvider;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(bool)arg4;
- (id)presetKind;
- (id)referenceColor;
- (struct CGSize { double x1; double x2; })renderedImageSizeForObjectSize:(struct CGSize { double x1; double x2; })arg1;
- (double)scale;
- (void)setTechnique:(int)arg1;
- (bool)shouldBeReappliedToCALayer:(id)arg1;
- (int)technique;
- (id)tintColor;

@end
