
@interface PUOneUpCropButton : UIView <UIPointerInteractionDelegate, _PUOneUpCropUIButtonDelegate> {
    _PUOneUpCropUIButton * _button;
    unsigned long long  _cachedDefaultAspectRatio;
    <PUOneUpCropButtonDelegate> * _delegate;
    bool  _loadedDefaultAspectRatio;
    bool  _presentingMenu;
    bool  _targeted;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) _PUOneUpCropUIButton *button;
@property (nonatomic) unsigned long long cachedDefaultAspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUOneUpCropButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBeingTouched;
@property (nonatomic) bool loadedDefaultAspectRatio;
@property (nonatomic) bool presentingMenu;
@property (readonly) Class superclass;
@property (nonatomic) bool targeted;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (struct CGSize { double x1; double x2; })_size;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForWindow:(id)arg1;

- (void).cxx_destruct;
- (id)_actionForAspectRatio:(unsigned long long)arg1;
- (id)_aspectRatioMenu;
- (id)_aspectRatioMenuActions;
- (struct CGSize { double x1; double x2; })_aspectRatioSizeForAspectRatio:(unsigned long long)arg1;
- (id)_backgroundEffectsWithBrightness:(double)arg1;
- (id)_createButton;
- (unsigned long long)_defaultAspectRatio;
- (void)_didTapButton:(id)arg1;
- (id)_identifierForAspectRatio:(unsigned long long)arg1;
- (bool)_portrait;
- (void)_setDefaultAspectRatio:(unsigned long long)arg1;
- (id)button;
- (unsigned long long)cachedDefaultAspectRatio;
- (id)delegate;
- (id)init;
- (bool)isBeingTouched;
- (bool)isEnabled;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (bool)loadedDefaultAspectRatio;
- (void)oneUpCropUIButton:(id)arg1 menuPresentedDidChange:(bool)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)presentMenu;
- (bool)presentingMenu;
- (void)setButton:(id)arg1;
- (void)setCachedDefaultAspectRatio:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLoadedDefaultAspectRatio:(bool)arg1;
- (void)setPresentingMenu:(bool)arg1;
- (void)setTargeted:(bool)arg1;
- (void)setVisualEffectView:(id)arg1;
- (bool)targeted;
- (id)visualEffectView;

@end
