
@interface TVRUIButton : UIControl <UIPointerInteractionDelegate> {
    long long  _buttonType;
    UIColor * _defaultBackgroundColor;
    bool  _disableHighlightEffect;
    TVRButtonHaptic * _haptic;
    bool  _hasButtonShape;
    UIViewPropertyAnimator * _highlightAnimator;
    UIImageView * _imageView;
    <TVRUIStyleProvider> * _styleProvider;
    bool  _tapAction;
    UILabel * _titleLabel;
    UIViewPropertyAnimator * _unhighlightAnimator;
}

@property (nonatomic, readonly) long long buttonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIColor *defaultBackgroundColor;
@property (readonly, copy) NSString *description;
@property (getter=isHighlightEffectDisabled, nonatomic) bool disableHighlightEffect;
@property (nonatomic, retain) TVRButtonHaptic *haptic;
@property (nonatomic) bool hasButtonShape;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) <TVRUIStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (getter=hasTapAction, nonatomic, readonly) bool tapAction;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIViewPropertyAnimator *unhighlightAnimator;

+ (bool)buttonTypeHasTapAction:(long long)arg1;
+ (bool)isValidButtonType:(long long)arg1;

- (void).cxx_destruct;
- (id)_accessibilityHintForButtonType:(long long)arg1;
- (id)_accessibilityIDForButtonType:(long long)arg1;
- (id)_accessibilityLabelForButtonType:(long long)arg1;
- (void)_boldTextEnabledStatusChanged:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_darkenSystemColorsChanged:(id)arg1;
- (id)_descriptionBuilder;
- (id)_hapticForButtonType:(long long)arg1;
- (void)_largeTextEnabledStatusChanged:(id)arg1;
- (id)_pointerEffectForButtonType:(long long)arg1 targetedPreview:(id)arg2;
- (void)_touchDown:(id)arg1;
- (void)_touchUp:(id)arg1;
- (void)_updateButtonType:(long long)arg1;
- (long long)buttonType;
- (id)defaultBackgroundColor;
- (id)description;
- (id)haptic;
- (bool)hasButtonShape;
- (bool)hasTapAction;
- (id)highlightAnimator;
- (id)imageView;
- (id)initWithType:(long long)arg1 hasTapAction:(bool)arg2;
- (bool)isHighlightEffectDisabled;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)setDisableHighlightEffect:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHaptic:(id)arg1;
- (void)setHasButtonShape:(bool)arg1;
- (void)setHighlightAnimator:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUnhighlightAnimator:(id)arg1;
- (id)styleProvider;
- (id)titleLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)unhighlightAnimator;

@end
