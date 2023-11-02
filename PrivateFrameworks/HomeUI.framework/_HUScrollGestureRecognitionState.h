
@interface _HUScrollGestureRecognitionState : NSObject {
    <NACancelable> * _activationTimer;
    UIGestureRecognizer * _gestureRecognizer;
}

@property (nonatomic, retain) <NACancelable> *activationTimer;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;

- (void).cxx_destruct;
- (id)activationTimer;
- (id)gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1;
- (void)setActivationTimer:(id)arg1;

@end
