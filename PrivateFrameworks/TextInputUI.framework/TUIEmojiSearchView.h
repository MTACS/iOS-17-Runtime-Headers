
@interface TUIEmojiSearchView : UIView {
    UIView * _bottomHalfContainerView;
    bool  _collapsed;
    UIView * _predictionView;
    UILayoutGuide * _predictionViewGuide;
    bool  _predictionViewVisible;
    UIView * _predictionViewWrapperView;
    NSLayoutConstraint * _predictionWrapperBottom;
    NSArray * _predictionWrapperConstraints;
    NSLayoutConstraint * _predictionWrapperLeading;
    NSLayoutConstraint * _predictionWrapperTop;
    double  _previousInsets;
    UIView * _resultsCollectionContainerView;
    UICollectionView * _resultsCollectionView;
    NSArray * _resultsCollectionWrapperConstraints;
    bool  _resultsViewVisible;
    NSLayoutConstraint * _searchFieldLeading;
    NSLayoutConstraint * _searchFieldToTop;
    TUIEmojiSearchTextField * _searchTextField;
    UIView * _searchTextFieldPortal;
    NSArray * _sideBySideViewConstraints;
    NSArray * _textFieldOnTopConstraints;
    NSLayoutConstraint * _topToBottomPadding;
    bool  _useHorizontalLayout;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, retain) UIView *predictionView;
@property (nonatomic) bool predictionViewVisible;
@property (nonatomic, retain) UICollectionView *resultsCollectionView;
@property (nonatomic) bool resultsViewVisible;
@property (nonatomic, readonly) TUIEmojiSearchTextField *searchTextField;

- (void).cxx_destruct;
- (id)_constraintsFromView:(id)arg1 toContainerView:(id)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 identifier:(id)arg4;
- (void)_createPredictionViewConstraints;
- (void)_createResultsViewConstraints;
- (void)_didChangeHandBiasNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_handBiasedEdgeInsets;
- (void)createConstraintsIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCollapsed;
- (void)layoutSubviews;
- (id)predictionView;
- (bool)predictionViewVisible;
- (id)resultsCollectionView;
- (bool)resultsViewVisible;
- (id)searchTextField;
- (void)setCollapsed:(bool)arg1;
- (void)setPredictionView:(id)arg1;
- (void)setPredictionViewVisible:(bool)arg1;
- (void)setPredictionViewVisible:(bool)arg1 animated:(bool)arg2;
- (void)setResultsCollectionView:(id)arg1;
- (void)setResultsViewVisible:(bool)arg1;
- (void)transitionToCompactLayout:(bool)arg1;
- (void)updateInsetsIfNeeded:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
