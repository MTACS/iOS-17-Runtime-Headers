
@interface SBSlideOverTongueView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _bitmapMaskSize;
    UIImageView * _chevronImageView;
    <SBSlideOverTongueViewDelegate> * _delegate;
    unsigned long long  _direction;
    MTMaterialView * _materialView;
    unsigned long long  _state;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIView * _tongueContainerView;
    UIView * _tongueMaskView;
}

@property (nonatomic) <SBSlideOverTongueViewDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_updateContainerPosition;
- (void)_updateContainerTransform;
- (void)_updateSubviewCollapsedExpandedState;
- (id)delegate;
- (unsigned long long)direction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDirection:(unsigned long long)arg1 state:(unsigned long long)arg2 animated:(bool)arg3;
- (unsigned long long)state;

@end
