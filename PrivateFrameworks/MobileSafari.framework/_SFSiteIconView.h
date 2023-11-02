
@interface _SFSiteIconView : UIView {
    UIAction * _action;
    bool  _allowsDropShadow;
    UIVisualEffectView * _backgroundView;
    WebBookmark * _bookmark;
    _SFHairlineBorderView * _borderView;
    bool  _imageIsTransparent;
    UIImageView * _imageView;
    UIImage * _leadingImage;
    UILabel * _monogramLabel;
    UIColor * _preferredBackgroundColor;
    UIVisualEffect * _preferredBackgroundEffect;
    UIImageView * _shadowView;
    long long  _state;
    id  _touchIconRequestToken;
    <_SFSiteIconViewUpdateObserver> * _updateObserver;
}

@property (nonatomic, copy) UIAction *action;
@property (nonatomic) bool allowsDropShadow;
@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *leadingImage;
@property (nonatomic) <_SFSiteIconViewUpdateObserver> *updateObserver;
@property (nonatomic, copy) NSString *visualEffectGroupName;

- (void).cxx_destruct;
- (void)_cancelTouchIconRequest;
- (void)_displayDefaultFolderIcon;
- (id)_effectiveBackgroundColor;
- (id)_glyphConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFrame;
- (long long)_inferredIconSize;
- (double)_monogramFontSize;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setGlyph:(id)arg1 withBackgroundEffect:(id)arg2;
- (void)_setImage:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2;
- (void)_setSiteIcon:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setState:(long long)arg1;
- (id)_tintedFolderImage;
- (void)_updateGlyphConfiguration;
- (void)_updateMonogramLabelSizeAndFont;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)arg1;
- (id)action;
- (bool)allowsDropShadow;
- (id)bookmark;
- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leadingImage;
- (void)setAction:(id)arg1;
- (void)setAction:(id)arg1 backgroundEffect:(id)arg2;
- (void)setAllowsDropShadow:(bool)arg1;
- (void)setBookmark:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setUpdateObserver:(id)arg1;
- (void)setVisualEffectGroupName:(id)arg1;
- (void)updateBookmarkData;
- (id)updateObserver;
- (bool)usesVibrantAppearance;
- (id)visualEffectGroupName;

@end
