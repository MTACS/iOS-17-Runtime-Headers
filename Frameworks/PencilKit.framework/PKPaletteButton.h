
@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling, UIPointerInteractionDelegate> {
    UIButton * _button;
    <PKPaletteButtonDelegate> * _delegate;
    UIMenu * _menu;
    NSHashTable * _observers;
    UIPointerInteraction * _pointerInteraction;
    double  _scalingFactor;
    bool  _useCompactLayout;
}

@property (nonatomic, retain) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) UIPointerInteraction *pointerInteraction;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;
@property (nonatomic) bool useCompactLayout;

+ (id)UCBButton;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)ellipsisButton;
+ (id)emojiKeyboardButton;
+ (id)keyboardButton;
+ (id)plusButton;
+ (id)redoButton;
+ (id)returnKeyButton;
+ (id)shapeButton;
+ (id)textButton;
+ (id)undoButton;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_buttonTransform;
- (void)_notifyIntrinsicContentSizeDidChange;
- (id)_tintColorForCurrentState;
- (id)_uiButtonInstance;
- (void)_updateUI;
- (bool)_wantsCustomBackgroundColor;
- (bool)_wantsCustomTintColor;
- (void)addIntrinsicContentSizeObserver:(id)arg1;
- (id)button;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)menu;
- (id)observers;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)removeIntrinsicContentSizeObserver:(id)arg1;
- (double)scalingFactor;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMenu:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPointerInteraction:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUseCompactLayout:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactLayout;

@end
