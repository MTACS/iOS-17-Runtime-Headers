
@interface MRUGroupSlider : MRUSlider <UIGestureRecognizerDelegate> {
    <MRUGroupSliderDelegate> * _delegate;
    UIImpactFeedbackGenerator * _feedbackGenerator;
    bool  _longPressEnabled;
    bool  _longPressFeedbackEnabled;
    MRULongPressGestureRecognizer * _longPressFeedbackGestureRecognizer;
    MRULongPressGestureRecognizer * _longPressGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUGroupSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (getter=isLongPressEnabled, nonatomic) bool longPressEnabled;
@property (nonatomic) bool longPressFeedbackEnabled;
@property (nonatomic, retain) MRULongPressGestureRecognizer *longPressFeedbackGestureRecognizer;
@property (nonatomic, retain) MRULongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)feedbackGenerator;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPressCancelled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLongPressEnabled;
- (bool)longPressFeedbackEnabled;
- (id)longPressFeedbackGestureRecognizer;
- (id)longPressGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setLongPressEnabled:(bool)arg1;
- (void)setLongPressFeedbackEnabled:(bool)arg1;
- (void)setLongPressFeedbackGestureRecognizer:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)sliderLongPress:(id)arg1;
- (void)sliderLongPressFeedback:(id)arg1;

@end
