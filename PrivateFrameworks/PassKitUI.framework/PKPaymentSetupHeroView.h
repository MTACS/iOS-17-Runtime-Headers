
@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectSize;
    UIView * _backgroundView;
    UIView * _bottomDividerView;
    PKImageSequenceView * _cardCarouselView;
    long long  _context;
    UIImageView * _faceIDGlyphView;
    UIView * _heroDeviceView;
    PKPaymentHeroImageController * _heroImageController;
    NSMutableArray * _heroImageIdentifiers;
    NSMutableDictionary * _heroImagesDictionary;
    bool  _imageDownloadFailed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)assetBackgroundColor;

- (void).cxx_destruct;
- (void)_configureHeroCardsFromHeroImages:(id)arg1;
- (void)_createSubviews;
- (id)_heroImages;
- (double)_instructionFontSizeForContext:(long long)arg1;
- (bool)_isSmallPhone;
- (void)_layoutBottomDividerViewForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutCardCarouselWithAlignment:(struct { unsigned int x1; unsigned int x2; })arg1;
- (double)_phoneCardHeightInset;
- (double)_phoneTopPadding;
- (struct CGSize { double x1; double x2; })_watchCardCarouselSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forImage:(id)arg3 error:(id)arg4;
- (id)initWithContext:(long long)arg1 heroImageController:(id)arg2 heroImages:(id)arg3;
- (id)initWithContext:(long long)arg1 heroImageController:(id)arg2 heroImages:(id)arg3 product:(id)arg4;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
