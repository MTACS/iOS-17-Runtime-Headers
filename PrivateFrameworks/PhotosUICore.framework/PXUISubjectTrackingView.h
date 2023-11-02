
@interface PXUISubjectTrackingView : PXSubjectTrackingView <UIGestureRecognizerDelegate> {
    CALayer * _modulationFilterLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *modulationFilterLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didAddSubview:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithMediaView:(id)arg1 cineController:(id)arg2;
- (void)layoutSubviews;
- (id)modulationFilterLayer;
- (void)setModulationFilterLayer:(id)arg1;
- (void)setUpModulationLayer;
- (void)viewDoubleTapped:(id)arg1;
- (void)viewLongPressed:(id)arg1;
- (void)viewTapped:(id)arg1;

@end
