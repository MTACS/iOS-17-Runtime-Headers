
@interface SearchUIImage : SFImage {
    SFImageContext * _lastLoadedContext;
    bool  _needsTinting;
    SFImage * _sfImage;
    bool  _supportsFastPathShadow;
    UIImage * _uiImage;
}

@property (readonly) double aspectRatio;
@property (nonatomic, readonly) int defaultCornerRoundingStyle;
@property (retain) SFImageContext *lastLoadedContext;
@property (nonatomic) bool needsTinting;
@property (nonatomic, retain) SFImage *sfImage;
@property (nonatomic) bool supportsFastPathShadow;
@property (nonatomic, retain) UIImage *uiImage;

+ (id)imageWithSFImage:(id)arg1;
+ (id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2;

- (void).cxx_destruct;
- (double)aspectRatio;
- (id)badgingImage;
- (double)cornerRadius;
- (int)cornerRoundingStyle;
- (void)decodeImageData:(id)arg1 scale:(double)arg2 isDarkStyle:(bool)arg3 completionHandler:(id /* block */)arg4;
- (int)defaultCornerRoundingStyle;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithImage:(id)arg1;
- (id)initWithSFImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemplate;
- (id)lastLoadedContext;
- (id)loadImageWithImageData:(id)arg1 scale:(double)arg2 isDarkStyle:(bool)arg3;
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)needsTinting;
- (double)scale;
- (void)setLastLoadedContext:(id)arg1;
- (void)setNeedsTinting:(bool)arg1;
- (void)setSfImage:(id)arg1;
- (void)setSupportsFastPathShadow:(bool)arg1;
- (void)setUiImage:(id)arg1;
- (id)sfImage;
- (bool)shouldCropToCircle;
- (struct CGSize { double x1; double x2; })size;
- (bool)supportsFastPathShadow;
- (id)uiImage;

@end
