
@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    unsigned long long  _behavior;
    REContent * _content;
    double  _contentBrightness;
    UIImage * _contentImage;
    double  _darkeningAmount;
    UIColor * _defaultTextColor;
    <REUpNextCellDelegate> * _delegate;
    CALayer * _imageLayer;
    UILongPressGestureRecognizer * _longPressRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _overlayInsets;
    UIView * _overlayView;
    UIImage * _overrideContentImage;
    NSString * _representedElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIImageView * _shadowView;
    bool  _shouldOverrideContentHeaderColor;
}

@property (nonatomic, readonly) REContent *content;
@property (nonatomic, readonly) UIImage *contentImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *defaultTextColor;
@property (nonatomic) <REUpNextCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (nonatomic, retain) UIImage *overrideContentImage;
@property (nonatomic, retain) NSString *representedElementIdentifier;
@property (nonatomic, readonly) bool shouldOverrideContentHeaderColor;
@property (readonly) Class superclass;

+ (id)_shadowImage;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (id)content;
- (id)contentImage;
- (id)defaultTextColor;
- (void)defaultTextColorDidChange;
- (id)delegate;
- (void)didLongPress:(id)arg1;
- (id)imageLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideContentImage;
- (void)prepareForReuse;
- (id)representedElementIdentifier;
- (void)setContentBrightness:(double)arg1 animated:(bool)arg2;
- (void)setContentImage:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForegroundTextColorToColor:(id)arg1 shouldOverrideContentHeaderColor:(bool)arg2;
- (void)setHighlightBehavior:(unsigned long long)arg1;
- (void)setHighlightInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideContentImage:(id)arg1;
- (void)setRepresentedElementIdentifier:(id)arg1;
- (void)setShadowViewHidden:(bool)arg1;
- (bool)shouldOverrideContentHeaderColor;
- (id)transitionContext;

@end
