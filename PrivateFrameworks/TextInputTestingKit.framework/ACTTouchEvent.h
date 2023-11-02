
@interface ACTTouchEvent : ACTUserAction {
    TIKeyboardTouchEvent * _touchEvent;
}

@property (nonatomic, readonly) TIKeyboardTouchEvent *touchEvent;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)description;
- (id)initWithTouchEvent:(id)arg1;
- (id)touchEvent;

@end
