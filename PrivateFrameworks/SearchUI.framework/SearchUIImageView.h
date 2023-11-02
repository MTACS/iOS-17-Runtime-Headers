
@interface SearchUIImageView : TLKImageView <TLKImageViewDelegate> {
    SFImage * _currentImage;
    SFImage * _fallbackImage;
    SearchUIButton * _overlayPlayButton;
    UIView * _tintView;
}

@property (nonatomic, retain) SFImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SFImage *fallbackImage;
@property (readonly) unsigned long long hash;
@property (readonly) UIView *highlightReferenceView;
@property (nonatomic, retain) SearchUIButton *overlayPlayButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tintView;

+ (id)imageViewWithImage:(id)arg1;
+ (id)thumbnailForRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)appIconDidChange:(id)arg1;
- (id)currentImage;
- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(id)arg1;
- (id)fallbackImage;
- (id)highlightReferenceView;
- (id)init;
- (void)layoutSubviews;
- (id)overlayPlayButton;
- (void)setCurrentImage:(id)arg1;
- (void)setFallbackImage:(id)arg1;
- (void)setOverlayPlayButton:(id)arg1;
- (void)setTintView:(id)arg1;
- (id)tintView;
- (void)updateWithImage:(id)arg1;
- (void)updateWithImage:(id)arg1 fallbackImage:(id)arg2 needsOverlayButton:(bool)arg3;

@end
