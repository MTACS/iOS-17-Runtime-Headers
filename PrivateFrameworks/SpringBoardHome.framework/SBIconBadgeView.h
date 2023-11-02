
@interface SBIconBadgeView : UIView <PTSettingsKeyObserver, SBIconAccessoryView> {
    SBDarkeningImageView * _backgroundView;
    bool  _displayingAccessory;
    UIImageView * _incomingTextView;
    <SBIconListLayout> * _listLayout;
    SBFParallaxSettings * _parallaxSettings;
    NSString * _text;
    SBHIconAccessoryCountedMapImageTuple * _textImageTuple;
    UIImageView * _textView;
}

@property (nonatomic, retain) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIconListLayout> *listLayout;
@property (nonatomic, retain) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)_checkoutImageForText:(id)arg1 font:(id)arg2 highlighted:(bool)arg3;
+ (id)_createImageForText:(id)arg1 font:(id)arg2 highlighted:(bool)arg3;
+ (double)_textPadding;
+ (id)badgeBackgroundColor;

- (void).cxx_destruct;
- (void)_applyParallaxSettings;
- (void)_clearText;
- (void)_configureAnimatedForText:(id)arg1 highlighted:(bool)arg2 animator:(id)arg3;
- (void)_crossfadeToTextImage:(id)arg1 animator:(id)arg2;
- (void)_layOutTextImageView:(id)arg1;
- (void)_resizeForTextImage:(id)arg1;
- (void)_zoomInWithTextImage:(id)arg1 animator:(id)arg2;
- (void)_zoomOutWithAnimator:(id)arg1;
- (struct CGPoint { double x1; double x2; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)accessoryTextForIcon:(id)arg1 infoProvider:(id)arg2;
- (double)badgeContentScale;
- (struct CGSize { double x1; double x2; })badgeSize;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)dealloc;
- (bool)displayingAccessory;
- (id)font;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForTextImage:(id)arg1;
- (struct CGPoint { double x1; double x2; })layoutOffset;
- (void)layoutSubviews;
- (id)listLayout;
- (id)parallaxSettings;
- (void)prepareForReuse;
- (void)setAccessoryBrightness:(double)arg1;
- (void)setListLayout:(id)arg1;
- (void)setParallaxSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
