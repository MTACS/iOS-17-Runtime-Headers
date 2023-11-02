
@interface CKActionMenuGestureRecognizerButton : NSObject {
    UIButton * _button;
    <CKActionMenuGestureRecognizerButtonDelegate> * _delegate;
    NSDate * _gestureDidBeginDate;
    CKActionMenuGestureRecognizer * _gestureRecognizer;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) <CKActionMenuGestureRecognizerButtonDelegate> *delegate;
@property (nonatomic, retain) NSDate *gestureDidBeginDate;
@property (nonatomic, retain) CKActionMenuGestureRecognizer *gestureRecognizer;

+ (id)actionMenuGestureRecognizerButtonWithButton:(id)arg1;

- (void).cxx_destruct;
- (id)button;
- (id)delegate;
- (id)gestureDidBeginDate;
- (void)gestureRecognized:(id)arg1;
- (id)gestureRecognizer;
- (id)initWithGestureRecognizer:(id)arg1 button:(id)arg2;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureDidBeginDate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)touchDownButton:(id)arg1;
- (void)touchUpInsideButton:(id)arg1;
- (void)touchUpOutsideButton:(id)arg1;

@end
