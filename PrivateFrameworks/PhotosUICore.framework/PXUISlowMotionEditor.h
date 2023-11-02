
@interface PXUISlowMotionEditor : PXSlowMotionEditor <UIGestureRecognizerDelegate> {
    UIImpactFeedbackGenerator * _impactGenerator;
    UIPanGestureRecognizer * _panGesture;
    UITapGestureRecognizer * _tapGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactGenerator;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;

+ (id)createSnappingControllerWithSnappingTarget:(double)arg1;
+ (id)handleImage;

- (void).cxx_destruct;
- (void)_PXUISlowMotionEditor_commonInit;
- (void)_handleBeginPanGesture:(id)arg1;
- (void)_handleChangePanGesture:(id)arg1;
- (void)_handleEndPanGesture:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)impactGenerator;
- (void)impactOccured;
- (id)init;
- (id)panGesture;
- (void)prepareForImpact;
- (void)setImpactGenerator:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (id)tapGesture;

@end
