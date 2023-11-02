
@interface SFDownloadsBarButtonItemView : UIButton <SFDeferrableUpdateView, UIPointerInteractionDelegate> {
    UIBarButtonItem * _barButtonItem;
    _SFDownloadsIconView * _iconView;
    double  _progress;
    UIProgressView * _progressView;
    struct { 
        id foregroundNotificationObserver; 
        id backgroundNotificationObserver; 
        bool needsDeferredContentUpdate; 
        bool sceneIsForeground; 
    }  deferrableUpdateViewState;
}

@property (nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress;
@property (readonly) Class superclass;

+ (id)buttonWithBarButtonItem:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_barButtonHitRect;
- (void)_buttonPressed;
- (void)_installSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (void)_updateIcon;
- (id)barButtonItem;
- (struct { id x1; id x2; bool x3; bool x4; }*)deferrableUpdateViewState;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (double)progress;
- (void)pulse;
- (void)setBarButtonItem:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;

@end
