
@interface _UIFluidSliderInelasticPanDriver : NSObject <UIGestureRecognizerDelegate, _UIFluidSliderDirectDriving> {
    double  __initialValue;
    <_UIFluidSliderDirectDrivingDelegate> * _delegate;
    <_UIFluidSliderDrivable> * _drivable;
    bool  _enabled;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double  _stretchAmount;
    unsigned long long  _trackAxis;
    UIView * _view;
}

@property (nonatomic) double _initialValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIFluidSliderDirectDrivingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_UIFluidSliderDrivable> *drivable;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double stretchAmount;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long trackAxis;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleGesture:(id)arg1;
- (double)_initialValue;
- (void)_issueUpdateWithValue:(double)arg1 isActive:(bool)arg2;
- (double)_trackLength;
- (void)cancel;
- (id)delegate;
- (id)drivable;
- (bool)enabled;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)name;
- (id)panGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setDrivable:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStretchAmount:(double)arg1;
- (void)setTrackAxis:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (void)set_initialValue:(double)arg1;
- (void)stop;
- (double)stretchAmount;
- (unsigned long long)trackAxis;
- (id)view;

@end
