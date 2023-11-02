
@interface AVPictureInPictureContentViewController : UIViewController <AVPictureInPictureContentSource> {
    AVPictureInPictureControllerContentSource * _contentSource;
    <AVPictureInPictureContentViewControllerDelegate> * _delegate;
    bool  _lastKnownIsVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKnownVideoRectInWindow;
    NSTimer * _observeSourceViewTimer;
    AVPictureInPictureController * _pictureInPictureController;
    AVPictureInPictureViewController * _pictureInPictureViewController;
    AVPlayerController * _playerController;
}

@property (nonatomic, readonly) bool avkit_isVisible;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avkit_videoRectInWindow;
@property (nonatomic, readonly) UIWindow *avkit_window;
@property (nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastKnownIsVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastKnownVideoRectInWindow;
@property (nonatomic, retain) NSTimer *observeSourceViewTimer;
@property (nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (nonatomic) AVPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_observeSourceView;
- (void)_removeFromParent;
- (void)_setLastKnownIsVisible:(bool)arg1 videoRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
- (long long)avkit_contentSourceType;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
- (bool)avkit_isVisible;
- (id)avkit_makePlayerControllerIfNeeded:(id)arg1;
- (id)avkit_pictureInPictureViewController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_videoRectInWindow;
- (bool)avkit_wantsManagedSecondScreenPlayback;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;
- (id)avkit_window;
- (id)contentSource;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)lastKnownIsVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastKnownVideoRectInWindow;
- (id)observeSourceViewTimer;
- (id)pictureInPictureController;
- (id)pictureInPictureViewController;
- (id)playerController;
- (void)setContentSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastKnownIsVisible:(bool)arg1;
- (void)setLastKnownVideoRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setObserveSourceViewTimer:(id)arg1;
- (void)setPictureInPictureController:(id)arg1;
- (void)setPictureInPictureViewController:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)startObservingSourceView;
- (void)stopObservingSourceView;

@end
