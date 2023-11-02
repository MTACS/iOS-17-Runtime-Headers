
@interface CNUIToolbar : UIView {
    UIView * _border;
    NSArray * _buttons;
    bool  _isAnimating;
    NSArray * _items;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIView *border;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic) bool isAnimating;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (double)defaultToolBarHeight;

- (void).cxx_destruct;
- (id)border;
- (double)borderWidth;
- (id)buttonForItem:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (id)buttons;
- (id)initWithItems:(id)arg1;
- (bool)isAnimating;
- (bool)isEnabledForItem:(id)arg1;
- (id)items;
- (void)layoutSubviews;
- (void)setBorder:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setEnabled:(bool)arg1 forItem:(id)arg2;
- (void)setIsAnimating:(bool)arg1;
- (void)setVisualEffectView:(id)arg1;
- (void)setupBorder;
- (void)setupView;
- (id)visualEffectView;

@end
