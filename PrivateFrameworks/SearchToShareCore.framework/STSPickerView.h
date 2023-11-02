
@interface STSPickerView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    double  _bottomInset;
    UICollectionView * _collectionView;
    NSMutableArray * _constraints;
    STSGridLayout * _gridLayout;
    NSLayoutConstraint * _headerTopConstraint;
    UIView * _headerView;
    bool  _isDeceleratingQuickly;
    double  _lastContentOffsetY;
    STSSearchNoticeView * _overlayView;
    bool  _showActivityIndicator;
    double  _topInset;
}

@property (nonatomic) double bottomInset;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) STSSearchNoticeView *overlayView;
@property (nonatomic) bool showActivityIndicator;
@property (nonatomic) double topInset;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_updateContentInset;
- (double)bottomInset;
- (id)collectionView;
- (id)headerView;
- (id)init;
- (void)layoutSubviews;
- (id)overlayView;
- (void)scrollToTopWithAnimation:(bool)arg1;
- (void)setBottomInset:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setTopInset:(double)arg1;
- (bool)showActivityIndicator;
- (double)topInset;
- (void)updateContentOffset:(double)arg1;
- (void)updateHeaderPositionOnDecelerationEnded;
- (void)updateHeaderPositionOnDraggingBegan;
- (void)updateHeaderPositionOnDraggingEndedWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateHeaderPositionOnScroll;

@end
