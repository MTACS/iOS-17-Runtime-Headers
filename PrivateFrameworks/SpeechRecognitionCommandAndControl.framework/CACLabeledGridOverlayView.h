
@interface CACLabeledGridOverlayView : UIView {
    NSMutableArray * _allBadgeViews;
    CACAdaptiveBackdropView * _backdrop;
    UIView * _badgesContainer;
    UIView * _contrastBadgesContainer;
    NSMutableArray * _dimmingViews;
    bool  _isSmallEnoughForZooming;
    NSMutableArray * _labeledElements;
    NSMutableArray * _outOfBoxBadgeViews;
    NSMutableArray * _separatorViews;
    bool  _showsElementsAsClickable;
    bool  _showsNumbersInTopLeft;
    CACZoomController * _zoomController;
    NSMutableArray * _zoomedGridBadgeViews;
}

@property (nonatomic, retain) NSMutableArray *allBadgeViews;
@property (nonatomic, retain) CACAdaptiveBackdropView *backdrop;
@property (nonatomic, retain) UIView *badgesContainer;
@property (nonatomic, retain) UIView *contrastBadgesContainer;
@property (nonatomic, retain) NSMutableArray *dimmingViews;
@property (nonatomic) bool isSmallEnoughForZooming;
@property (nonatomic, retain) NSMutableArray *outOfBoxBadgeViews;
@property (nonatomic, retain) NSMutableArray *separatorViews;
@property (nonatomic) bool showsElementsAsClickable;
@property (nonatomic) bool showsNumbersInTopLeft;
@property (nonatomic, retain) CACZoomController *zoomController;
@property (nonatomic, retain) NSMutableArray *zoomedGridBadgeViews;

- (void).cxx_destruct;
- (id)_badgeViewContainerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingContrast:(bool)arg2;
- (id)_newLineViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addLabeledElements:(id)arg1;
- (id)allBadgeViews;
- (id)backdrop;
- (id)badgesContainer;
- (void)clearLabeledElements;
- (id)contrastBadgesContainer;
- (id)dimmingViews;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSmallEnoughForZooming;
- (id)outOfBoxBadgeViews;
- (id)separatorViews;
- (void)setAllBadgeViews:(id)arg1;
- (void)setBackdrop:(id)arg1;
- (void)setBadgesContainer:(id)arg1;
- (void)setContrastBadgesContainer:(id)arg1;
- (void)setDimmingViews:(id)arg1;
- (void)setIsSmallEnoughForZooming:(bool)arg1;
- (void)setOutOfBoxBadgeViews:(id)arg1;
- (void)setSeparatorViews:(id)arg1;
- (void)setShowsElementsAsClickable:(bool)arg1;
- (void)setShowsNumbersInTopLeft:(bool)arg1;
- (void)setZoomController:(id)arg1;
- (void)setZoomedGridBadgeViews:(id)arg1;
- (void)show;
- (bool)showsElementsAsClickable;
- (bool)showsNumbersInTopLeft;
- (id)zoomController;
- (void)zoomOverRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)zoomedGridBadgeViews;

@end
