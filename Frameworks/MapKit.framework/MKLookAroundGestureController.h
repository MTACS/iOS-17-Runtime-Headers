
@interface MKLookAroundGestureController : NSObject <UIGestureRecognizerDelegate> {
    <MKLookAroundGestureControllerDelegate> * _delegate;
    long long  _lastZoomDirection;
    double  _lastZoomScale;
    MKLookAroundView * _lookAroundView;
    bool  _navigatingEnabled;
    VKCompoundAnimation * _panDecelerationAnimationGroup;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _panningEnabled;
    bool  _readyToReplayTap;
    UITapGestureRecognizer * _singleNavigateGestureRecognizer;
    NSDate * _singleTapTime;
    double  _startZoomScale;
    long long  _userInteractionCount;
    UIPinchGestureRecognizer * _zoomGestureRecognizer;
    bool  _zoomingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKLookAroundGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MKLookAroundView *lookAroundView;
@property (nonatomic) bool navigatingEnabled;
@property (nonatomic) bool panningEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool zoomingEnabled;

- (void).cxx_destruct;
- (void)_handlePan:(id)arg1;
- (void)_handleSingleNavigate:(id)arg1;
- (void)_handleZoom:(id)arg1;
- (void)_moveBackToReplayTap;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithLookAroundView:(id)arg1;
- (id)lookAroundView;
- (bool)navigatingEnabled;
- (bool)panningEnabled;
- (void)setDelegate:(id)arg1;
- (void)setLookAroundView:(id)arg1;
- (void)setNavigatingEnabled:(bool)arg1;
- (void)setPanningEnabled:(bool)arg1;
- (void)setZoomingEnabled:(bool)arg1;
- (bool)zoomingEnabled;

@end
