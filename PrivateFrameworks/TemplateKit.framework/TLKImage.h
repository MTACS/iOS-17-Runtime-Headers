
@interface TLKImage : NSObject {
    double  _aspectRatio;
    TLKImage * _badgeImage;
    double  _cornerRadius;
    unsigned long long  _cornerRoundingStyle;
    NSCache * _imageCache;
    bool  _isTemplate;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _supportsFastPathShadow;
    UIImage * _uiImage;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic, retain) TLKImage *badgeImage;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (retain) NSCache *imageCache;
@property (nonatomic) bool isTemplate;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool supportsFastPathShadow;
@property (nonatomic, retain) UIImage *uiImage;

+ (id)applyTintColor:(id)arg1 toImage:(id)arg2;
+ (bool)imageIsSymbol:(id)arg1;
+ (bool)isTemplateImage:(id)arg1;
+ (id)keyForScale:(double)arg1 isDarkStyle:(bool)arg2;
+ (id)templateImageForImage:(id)arg1;

- (void).cxx_destruct;
- (double)aspectRatio;
- (id)badgeImage;
- (void)cacheImage:(id)arg1 forScale:(double)arg2 isDarkStyle:(bool)arg3;
- (id)cachedImageForScale:(double)arg1 isDarkStyle:(bool)arg2;
- (double)cornerRadius;
- (unsigned long long)cornerRoundingStyle;
- (id)imageCache;
- (id)init;
- (id)initWithImage:(id)arg1;
- (bool)isTemplate;
- (void)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setAspectRatio:(double)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerRoundingStyle:(unsigned long long)arg1;
- (void)setImageCache:(id)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSupportsFastPathShadow:(bool)arg1;
- (void)setUiImage:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)supportsFastPathShadow;
- (id)uiImage;

@end
