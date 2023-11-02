
@interface TVImageDescription : TVViewDescription {
    NSString * _accessibilityText;
    bool  _configureForMetrics;
    bool  _hasGradient;
    id  _imageProxy;
    bool  _isInBackgroundOrBanner;
    bool  _needsRoomBannerImageDecorator;
    UIImage * _placeholderImage;
    long long  _semanticContentAttribute;
    NSString * _siriData;
}

@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic) bool configureForMetrics;
@property (nonatomic) bool hasGradient;
@property (nonatomic, retain) id imageProxy;
@property (nonatomic) bool isInBackgroundOrBanner;
@property (nonatomic) bool needsRoomBannerImageDecorator;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic, copy) NSString *siriData;

- (void).cxx_destruct;
- (id)accessibilityText;
- (bool)configureForMetrics;
- (bool)hasGradient;
- (id)imageProxy;
- (id)initWithProxy:(id)arg1 andPlaceHolderImage:(id)arg2;
- (bool)isInBackgroundOrBanner;
- (bool)needsRoomBannerImageDecorator;
- (id)placeholderImage;
- (long long)semanticContentAttribute;
- (void)setAccessibilityText:(id)arg1;
- (void)setConfigureForMetrics:(bool)arg1;
- (void)setHasGradient:(bool)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setIsInBackgroundOrBanner:(bool)arg1;
- (void)setNeedsRoomBannerImageDecorator:(bool)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSiriData:(id)arg1;
- (id)siriData;

@end