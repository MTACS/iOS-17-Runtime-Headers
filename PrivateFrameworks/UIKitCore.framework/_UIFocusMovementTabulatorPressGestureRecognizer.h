
@interface _UIFocusMovementTabulatorPressGestureRecognizer : _UIFocusMovementPressGestureRecognizer {
    UIPress * _trackingPress;
}

@property (nonatomic, retain) UIPress *trackingPress;

- (void).cxx_destruct;
- (bool)_shouldReceivePress:(id)arg1;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)arg1;
- (void)reset;
- (void)setTrackingPress:(id)arg1;
- (id)trackingPress;

@end
