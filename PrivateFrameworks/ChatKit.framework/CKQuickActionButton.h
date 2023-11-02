
@interface CKQuickActionButton : UIView {
    bool  _animating;
    <CKQuickActionButtonAnimationDelegate> * _animationDelegate;
    UIView * _backgroundView;
    CAShapeLayer * _borderLayer;
    UIButton * _button;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    NSString * _currentAnimationIdentifier;
    NSMutableArray * _deferredAnimationIdentifiers;
    NSMutableDictionary * _deferredConfigurationStates;
    <CKQuickActionButtonDelegate> * _delegate;
    UIImageView * _imageView;
    unsigned long long  _state;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic) <CKQuickActionButtonAnimationDelegate> *animationDelegate;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) CAShapeLayer *borderLayer;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, retain) NSString *currentAnimationIdentifier;
@property (nonatomic, retain) NSMutableArray *deferredAnimationIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *deferredConfigurationStates;
@property (nonatomic) <CKQuickActionButtonDelegate> *delegate;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_buttonTouchCanceled;
- (void)_buttonTouchDown;
- (void)_buttonTouchUpInside;
- (id)animationDelegate;
- (double)animationDurationForState:(unsigned long long)arg1;
- (id)backgroundView;
- (id)borderLayer;
- (id)button;
- (id)buttonImageForState:(unsigned long long)arg1;
- (void)configureForState:(unsigned long long)arg1 animated:(bool)arg2 identifier:(id)arg3 wasDeferred:(bool)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsetsForState:(unsigned long long)arg1;
- (id)currentAnimationIdentifier;
- (id)deferredAnimationIdentifiers;
- (id)deferredConfigurationStates;
- (double)delayForFinalizingAnimation;
- (double)delayForImageSwapAnimation;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithInitialState:(unsigned long long)arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCurrentAnimationIdentifier:(id)arg1;
- (void)setDeferredAnimationIdentifiers:(id)arg1;
- (void)setDeferredConfigurationStates:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)state;
- (void)updateImageViewFrameForContentEdgeInsets;

@end
