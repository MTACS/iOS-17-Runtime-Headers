
@interface _SFToolbar : UIToolbar <_SFBarCommon, _SFBarRegistrationObserving> {
    UIVisualEffectView * _backgroundView;
    <_SFBarRegistrationToken> * _barRegistration;
    UIBlurEffect * _customBackdropEffect;
    long long  _placement;
    UIView * _separator;
    UIView * _superviewOwningLayout;
    _SFBarTheme * _theme;
    bool  _usesLegacyDarkBackdrop;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) <_SFBarRegistrationToken> *barRegistration;
@property (nonatomic, readonly) double baselineOffsetAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long placement;
@property (readonly) Class superclass;
@property (nonatomic) UIView *superviewOwningLayout;
@property (nonatomic, retain) _SFBarTheme *theme;
@property (nonatomic) bool usesLegacyDarkBackdrop;

+ (bool)_deviceSupportsMinibars;

- (void).cxx_destruct;
- (void)_cancelLinkAnimations;
- (double)_contentMargin;
- (void)_updateBackgroundViewEffects;
- (void)animateLinkImage:(struct CGImage { }*)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(id /* block */)arg5 afterDestinationLayerBouncesBlock:(id /* block */)arg6;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (id)backdropGroupName;
- (id)barRegistration;
- (double)baselineOffsetAdjustment;
- (void)dealloc;
- (void)didChangeArrangedBarItems:(id)arg1;
- (void)didCompleteBarRegistrationWithToken:(id)arg1;
- (id)initWithPlacement:(long long)arg1;
- (id)initWithPlacement:(long long)arg1 hideBackground:(bool)arg2;
- (bool)isMinibar;
- (void)layoutSubviews;
- (long long)placement;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBarRegistration:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setSuperviewOwningLayout:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setUsesLegacyDarkBackdrop:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)superviewOwningLayout;
- (id)theme;
- (bool)usesLegacyDarkBackdrop;

@end
