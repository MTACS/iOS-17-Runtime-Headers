
@interface MKSmallCalloutView : UIView {
    UILayoutGuide * _centerContentLeadingGuide;
    UILayoutGuide * _centerContentTrailingGuide;
    UIView<_MKCalloutAccessoryView> * _detailView;
    NSLayoutConstraint * _detailViewBottomConstraint;
    NSLayoutConstraint * _detailViewMinTopConstraint;
    NSLayoutConstraint * _detailViewTrailingConstraint;
    UIView<_MKCalloutAccessoryView> * _externalDetailView;
    UIView<_MKCalloutAccessoryView> * _externalLeftView;
    UIView<_MKCalloutAccessoryView> * _externalRightView;
    UIView<_MKCalloutAccessoryView> * _leftView;
    NSLayoutConstraint * _leftViewCenterContentMarginConstraint;
    NSLayoutConstraint * _leftViewHorizontalPositionConstraint;
    UILayoutGuide * _leftViewLeftSpacer;
    NSLayoutConstraint * _leftViewMinCalloutWidthConstraint;
    UILayoutGuide * _leftViewTopSpacer;
    NSLayoutConstraint * _leftViewTopSpacerBottomConstraint;
    _MKSmallCalloutPassthroughButton * _maskedContainerView;
    NSLayoutConstraint * _maxWidthConstraint;
    struct { 
        double margin; 
        double cornerRadius; 
        double arrowBase; 
        double arrowHeight; 
        bool useRadialSmoothing; 
        union { 
            struct { 
                double arrowBaseRadius; 
                double arrowRadius; 
            } radialSmoothing; 
            struct { 
                double arrowSmoothing; 
                double arrowPointFactor; 
            } nonRadialSmoothing; 
        } ; 
        bool alignDetailViewBaseline; 
        bool scaleVerticalPaddingForDynamicType; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } padding; 
    }  _metrics;
    NSLayoutConstraint * _minWidthConstraint;
    bool  _needsPreferredContentSizeUpdate;
    bool  _parallaxEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UIView<_MKCalloutAccessoryView> * _rightView;
    NSLayoutConstraint * _rightViewCenterContentMarginConstraint;
    NSLayoutConstraint * _rightViewHorizontalPositionConstraint;
    UILayoutGuide * _rightViewRightSpacer;
    UILayoutGuide * _rightViewTopSpacer;
    NSLayoutConstraint * _rightViewTopSpacerBottomConstraint;
    bool  _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKUILabel * _subtitleLabel;
    NSLayoutConstraint * _titleBaselineFromTopConstraint;
    NSLayoutConstraint * _titleBaselineFromTopMinimumConstraint;
    _MKUILabel * _titleLabel;
    NSArray * _titleLabelConstraints;
    NSLayoutConstraint * _titleMinimumBaselineToBottomConstraint;
    UIView * _titlesContainerView;
    NSLayoutConstraint * _unmaskedContainerLeadingConstraint;
    NSLayoutConstraint * _unmaskedContainerTrailingConstraint;
    UIView * _unmaskedContainerView;
}

@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (nonatomic, retain) UIView *detailView;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double minimumWidth;
@property (nonatomic) bool parallaxEnabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic, readonly) UIView *titlesContainerView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_maskedContainerView;
- (void)_setNeedsUpdatePreferredContentSize;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 metrics:(struct { double x1; double x2; double x3; double x4; bool x5; union { struct { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; struct UIEdgeInsets { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; } x9; })arg2;
- (id)leftView;
- (double)maximumWidth;
- (double)minimumWidth;
- (bool)parallaxEnabled;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reset;
- (id)rightView;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setParallaxEnabled:(bool)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titlesContainerView;

@end
