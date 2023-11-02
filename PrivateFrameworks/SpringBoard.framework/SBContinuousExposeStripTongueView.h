
@interface SBContinuousExposeStripTongueView : UIView {
    bool  _animating;
    struct SBSwitcherContinuousExposeStripTongueAttributes { 
        unsigned long long state; 
        unsigned long long direction; 
    }  _attributes;
    _UIBackdropView * _backdropView;
    struct CGSize { 
        double width; 
        double height; 
    }  _bitmapMaskSize;
    UIImageView * _chevronImageView;
    <SBContinuousExposeStripTongueViewDelegate> * _delegate;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIView * _tongueContainerView;
    UIView * _tongueMaskView;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, readonly) struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x1; unsigned long long x2; } attributes;
@property (nonatomic) <SBContinuousExposeStripTongueViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_updateContainerPosition;
- (void)_updateContainerTransform;
- (void)_updateSubviewLayoutForCollapsedOrExpandedState;
- (void)_updateSubviewOpacityForCollapsedOrExpandedState;
- (struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x1; unsigned long long x2; })attributes;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAttributes:(struct SBSwitcherContinuousExposeStripTongueAttributes { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
