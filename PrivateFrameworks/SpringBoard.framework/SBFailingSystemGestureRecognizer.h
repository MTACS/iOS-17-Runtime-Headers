
@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer

@property (nonatomic) <SBSystemGestureRecognizerDelegate> *delegate;

- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
