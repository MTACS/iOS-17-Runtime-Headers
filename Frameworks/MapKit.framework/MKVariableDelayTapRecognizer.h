
@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {
    double  originalMaximumIntervalBetweenSuccessiveTaps;
    <MKVariableDelayTapRecognizerDelegate> * tapDelayDelegate;
}

@property (nonatomic) <MKVariableDelayTapRecognizerDelegate> *tapDelayDelegate;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setTapDelayDelegate:(id)arg1;
- (id)tapDelayDelegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
