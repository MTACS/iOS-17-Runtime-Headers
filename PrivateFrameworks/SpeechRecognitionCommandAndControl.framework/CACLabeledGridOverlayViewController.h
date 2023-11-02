
@interface CACLabeledGridOverlayViewController : UIViewController <CACViewController> {
    CACLabeledGridOverlayView * _gridOverlayView;
    bool  _showsElementsAsClickable;
}

@property (nonatomic, retain) CACLabeledGridOverlayView *gridOverlayView;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, readonly) bool isSmallEnoughForZooming;
@property (nonatomic) bool showsElementsAsClickable;
@property (nonatomic) bool showsNumbersInTopLeft;
@property (nonatomic, readonly) long long zOrder;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)gridOverlayView;
- (void)hide;
- (bool)isOverlay;
- (bool)isSmallEnoughForZooming;
- (void)loadView;
- (void)setGridOverlayView:(id)arg1;
- (void)setLabeledElements:(id)arg1;
- (void)setShowsElementsAsClickable:(bool)arg1;
- (void)setShowsNumbersInTopLeft:(bool)arg1;
- (void)show;
- (bool)showsElementsAsClickable;
- (bool)showsNumbersInTopLeft;
- (long long)zOrder;
- (void)zoomOverRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
