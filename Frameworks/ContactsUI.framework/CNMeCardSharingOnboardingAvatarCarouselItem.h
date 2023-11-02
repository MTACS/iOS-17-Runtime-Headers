
@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject {
    UIImage * _cachedImage;
    double  _imageInsetPercentage;
    id /* block */  _imageProvider;
    unsigned long long  _imageType;
    bool  _shouldShowVariants;
    NSString * _title;
}

@property (nonatomic, retain) UIImage *cachedImage;
@property (nonatomic, readonly) double imageInsetPercentage;
@property (nonatomic, readonly, copy) id /* block */ imageProvider;
@property (nonatomic) unsigned long long imageType;
@property (nonatomic) bool shouldShowVariants;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)cachedImage;
- (double)imageInsetPercentage;
- (id /* block */)imageProvider;
- (unsigned long long)imageType;
- (id)initWithImageInsetPercentage:(double)arg1 imageProvider:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1;
- (void)setCachedImage:(id)arg1;
- (void)setImageType:(unsigned long long)arg1;
- (void)setShouldShowVariants:(bool)arg1;
- (bool)shouldShowVariants;
- (id)title;

@end
