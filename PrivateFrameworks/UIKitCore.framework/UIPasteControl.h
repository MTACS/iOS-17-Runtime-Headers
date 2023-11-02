
@interface UIPasteControl : UIControl <_UISecureControl> {
    UIPasteControlConfiguration * _configuration;
    bool  _internallyEnabled;
    bool  _pasteboardObserved;
    _UISecureController * _secureController;
    <UIPasteConfigurationSupporting> * _target;
}

@property (nonatomic, readonly) UIPasteControlConfiguration *configuration;
@property (nonatomic) <UIPasteConfigurationSupporting> *target;

- (void).cxx_destruct;
- (id)_encodableSubviews;
- (unsigned int)_secureName;
- (void)_updateEnabledWithNotification:(id)arg1;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInternallyEnabled;
- (void)layoutSubviews;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setTarget:(id)arg1;
- (bool)shouldTrack;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)synchronousSecureControlService;
- (id)target;

@end
