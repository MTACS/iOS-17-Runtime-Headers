
@interface _UISimplePressGestureRecognizer : UIGestureRecognizer {
    NSValue * _activeTrigger;
    UIDelayedAction * _delayedAction;
    NSArray * _triggers;
}

@property (nonatomic, readonly) NSValue *activeTrigger;
@property (nonatomic, copy) NSArray *allowedPressTypes;
@property (nonatomic, copy) NSArray *allowedTouchTypes;
@property (nonatomic, retain) UIDelayedAction *delayedAction;
@property (nonatomic, retain) NSArray *triggers;

- (void).cxx_destruct;
- (void)_begin;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (id)activeTrigger;
- (void)dealloc;
- (id)delayedAction;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setDelayedAction:(id)arg1;
- (void)setTriggers:(id)arg1;
- (id)triggers;

@end
