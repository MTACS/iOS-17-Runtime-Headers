
@interface _UIFluidSliderElasticPanDriver : NSObject <UIGestureRecognizerDelegate, _UIFluidSliderDirectDriving> {
    void animatedValue;
    void delegate;
    void drivable;
    void enabled;
    void initialStretchAmount;
    void initialValue;
    void name;
    void panGestureRecognizer;
    void state;
    void stretchAmount;
    void trackAxis;
    void view;
}

@property (nonatomic) <_UIFluidSliderDirectDrivingDelegate> *delegate;
@property (nonatomic) <_UIFluidSliderDrivable> *drivable;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double stretchAmount;
@property (nonatomic) unsigned long long trackAxis;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)drivable;
- (bool)enabled;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGesture:(id)arg1;
- (id)init;
- (id)name;
- (id)panGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setDrivable:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setStretchAmount:(double)arg1;
- (void)setTrackAxis:(unsigned long long)arg1;
- (void)setView:(id)arg1;
- (void)stop;
- (double)stretchAmount;
- (unsigned long long)trackAxis;
- (id)view;

@end
