
@interface VUIMonogramDescription : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultImageSize;
    UIColor * _fillColor;
    NSString * _firstName;
    UIFont * _font;
    UIColor * _gradientEndColor;
    UIColor * _gradientStartColor;
    NSURL * _imageURL;
    bool  _isUsingLibraryImageLoader;
    NSString * _lastName;
    bool  _optimizedImageRendering;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UIImage * _placeholderImage;
    <VUINetworkRequestLoader> * _requestLoader;
    long long  _scaleMode;
    bool  _shouldFallBackToSilhouette;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSDictionary * _specialOffsetByFirstLetter;
    NSString * _text;
    UIColor * _textColor;
    double  _upscaleAdjustment;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultImageSize;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) UIFont *font;
@property (nonatomic, retain) UIColor *gradientEndColor;
@property (nonatomic, retain) UIColor *gradientStartColor;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic) bool isUsingLibraryImageLoader;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic) bool optimizedImageRendering;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) <VUINetworkRequestLoader> *requestLoader;
@property (nonatomic) long long scaleMode;
@property (nonatomic) bool shouldFallBackToSilhouette;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSDictionary *specialOffsetByFirstLetter;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double upscaleAdjustment;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (struct CGSize { double x1; double x2; })defaultImageSize;
- (id)fillColor;
- (id)firstName;
- (id)font;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (unsigned long long)hash;
- (id)imageURL;
- (id)init;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isUsingLibraryImageLoader;
- (id)lastName;
- (bool)optimizedImageRendering;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)placeholderImage;
- (unsigned long long)preferedMonogramType;
- (id)requestLoader;
- (long long)scaleMode;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDefaultImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFillColor:(id)arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientStartColor:(id)arg1;
- (void)setIsUsingLibraryImageLoader:(bool)arg1;
- (void)setOptimizedImageRendering:(bool)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setRequestLoader:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setShouldFallBackToSilhouette:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpecialOffsetByFirstLetter:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUpscaleAdjustment:(double)arg1;
- (bool)shouldFallBackToSilhouette;
- (struct CGSize { double x1; double x2; })size;
- (id)specialOffsetByFirstLetter;
- (struct CGPoint { double x1; double x2; })specialOffsetForString:(id)arg1;
- (id)text;
- (id)textColor;
- (double)upscaleAdjustment;

@end
