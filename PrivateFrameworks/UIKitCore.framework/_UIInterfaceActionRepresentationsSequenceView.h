
@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {
    long long  _actionLayoutAxis;
    NSArray * _arrangedActionRepresentationViews;
    UIView * _backgroundView;
    NSLayoutConstraint * _minimumHeightConstraint;
    _UIInterfaceActionSeparatableSequenceView * _separatedContentSequenceView;
    long long  _sizingSeparatedContentSequenceViewToFitDisabledCount;
    bool  _visualCornerForcedOverride;
    unsigned long long  _visualCornerPosition;
    UIInterfaceActionVisualStyle * _visualStyle;
}

@property (nonatomic) long long actionLayoutAxis;
@property (nonatomic, retain) NSArray *arrangedActionRepresentationViews;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, readonly) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView;
@property (nonatomic) bool visualCornerForcedOverride;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;

- (void).cxx_destruct;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (double)_contentFitCanScrollThreshold;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)_enableSeparatedContentSequenceViewToFit;
- (bool)_isHorizontalLayout;
- (void)_loadDefaultSizingConstraints;
- (double)_minimumNumberOfRowsRequiredVisible;
- (void)_notifyDidScroll;
- (struct CGSize { double x1; double x2; })_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_updateBackgroundView;
- (void)_updateMinimumHeightConstraint;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (long long)actionLayoutAxis;
- (id)arrangedActionRepresentationViews;
- (id)backgroundView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)fittingWidthForLayoutAxis:(long long)arg1;
- (id)initWithVisualStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)minimumHeightConstraint;
- (void)reloadDisplayedContentVisualStyle;
- (id)separatedContentSequenceView;
- (void)setActionLayoutAxis:(long long)arg1;
- (void)setArrangedActionRepresentationViews:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setVisualCornerForcedOverride:(bool)arg1;
- (void)setVisualCornerPosition:(unsigned long long)arg1;
- (void)setVisualStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;
- (bool)visualCornerForcedOverride;
- (unsigned long long)visualCornerPosition;
- (id)visualStyle;

@end
