
@interface SFWebpageStatusBarView : UIView {
    NSTimer * _dismissStatusBarEnabledTimer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hoverPoint;
    bool  _shouldDodgeHoverPoint;
    UIView * _statusBarContentView;
    UILabel * _statusLabel;
    <SFWebPageStatusBarMessage> * _statusMessage;
    bool  _suppressShowingStatusBar;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } hoverPoint;
@property (nonatomic, retain) <SFWebPageStatusBarMessage> *statusMessage;
@property (nonatomic) bool suppressShowingStatusBar;

- (void).cxx_destruct;
- (void)_cancelPendingStatusBarHideIfNeeded;
- (void)_clearStatusBarIsEnabledMessage;
- (void)_hideStatusBar;
- (struct CGPoint { double x1; double x2; })_originForStatusBarContentViewForContentHeight:(double)arg1;
- (void)_showStatusBar;
- (void)clearStatus;
- (void)displayStatusBarIsEnabledMessage;
- (struct CGPoint { double x1; double x2; })hoverPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHoverPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setSuppressShowingStatusBar:(bool)arg1;
- (id)statusMessage;
- (bool)suppressShowingStatusBar;

@end
