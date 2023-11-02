
@interface VideosUI.MultiPlayerView : UIView {
    void $__lazy_storage_$_panGesture;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _focusedPlayerViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mode;
    void animatingViews;
    void animationDebounceSubject;
    void cancellables;
    void containerViews;
    void debounceTimer;
    void delegate;
    void didPinchPlayerViewController;
    void didSelectPlayerViewController;
    void distribution;
    void gestureInitialLocation;
    void gestureView;
    void initialPinchFrame;
    void layoutEngine;
    void maxPanVelocity;
    void patternGenerator;
    void playerLayout;
    void scaleRange;
    void shouldMaximizeScreenUsage;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)onPanGesture:(id)arg1;
- (void)viewPinchedWithGesture:(id)arg1;

@end
