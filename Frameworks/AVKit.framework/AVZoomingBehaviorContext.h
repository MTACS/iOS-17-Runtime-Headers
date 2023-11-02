
@interface AVZoomingBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVPlayerViewControllerBehaviorContext, UIGestureRecognizerDelegate> {
    AVZoomingBehavior * _behavior;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentAspectRatio;
    AVPlaybackContentZoomingView * _contentZoomingView;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    AVObservationController * _observationController;
    AVPlayerViewController * _playerViewController;
    bool  _zoomingEnabled;
}

@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) AVZoomingBehavior *behavior;
@property (nonatomic) struct CGSize { double x1; double x2; } contentAspectRatio;
@property (nonatomic, retain) AVPlaybackContentZoomingView *contentZoomingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVObservationController *observationController;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (readonly) Class superclass;
@property (getter=isZoomingEnabled, nonatomic) bool zoomingEnabled;

- (void).cxx_destruct;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_updateZoomingView;
- (id)activeContentView;
- (id)behavior;
- (struct CGSize { double x1; double x2; })contentAspectRatio;
- (id)contentZoomingView;
- (void)dealloc;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithAVKitOwner:(id)arg1;
- (bool)isZoomingEnabled;
- (id)makePlaybackContentContainerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(id)arg2;
- (id)observationController;
- (id)playerViewController;
- (void)setBehavior:(id)arg1;
- (void)setContentAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentZoomingView:(id)arg1;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (void)setObservationController:(id)arg1;
- (void)setZoomingEnabled:(bool)arg1;
- (void)viewDidLoad;
- (void)willAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;

@end
