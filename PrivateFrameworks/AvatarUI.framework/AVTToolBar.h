
@interface AVTToolBar : UIView {
    UIView * _border;
    NSArray * _buttons;
    <AVTToolBarDelegate> * _delegate;
    bool  _isAnimating;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIView *border;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic) <AVTToolBarDelegate> *delegate;
@property (nonatomic) bool isAnimating;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (double)defaultToolBarHeight;

- (void).cxx_destruct;
- (id)border;
- (double)borderWidth;
- (void)buttonPressed:(id)arg1;
- (id)buttonWithTitle:(id)arg1 isDefault:(bool)arg2;
- (id)buttons;
- (id)delegate;
- (id)initWithButtons:(id)arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setBorder:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1 forButtonAtIndex:(unsigned long long)arg2;
- (void)setIsAnimating:(bool)arg1;
- (void)setVisualEffectView:(id)arg1;
- (void)setupBorder;
- (void)setupView;
- (id)visualEffectView;

@end
