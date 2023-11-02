
@interface _MKConditionalPanGestureRecognizer : UIPanGestureRecognizer {
    long long  _requiredModifierFlags;
}

@property (nonatomic) long long requiredModifierFlags;

- (bool)_shouldReceiveEvent:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (long long)requiredModifierFlags;
- (void)setRequiredModifierFlags:(long long)arg1;

@end
