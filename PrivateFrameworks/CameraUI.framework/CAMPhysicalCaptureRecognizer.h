
@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer {
    NSSet * _activeButtons;
    NSArray * _desiredButtons;
    long long  _lastActiveButton;
    long long  _pressType;
    bool  _suspended;
}

@property (nonatomic, copy) NSSet *activeButtons;
@property (nonatomic, copy) NSArray *desiredButtons;
@property (nonatomic) long long lastActiveButton;
@property (nonatomic) long long pressType;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (long long)_captureButtonForPressType:(long long)arg1;
- (void)_updateApplicationButtonStatus;
- (id)activeButtons;
- (id)desiredButtons;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isSuspended;
- (long long)lastActiveButton;
- (long long)pressType;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setActiveButtons:(id)arg1;
- (void)setDesiredButtons:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLastActiveButton:(long long)arg1;
- (void)setPressType:(long long)arg1;
- (void)setSuspended:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
