
@interface GCDualShockGamepad : GCExtendedGamepad {
    GCControllerButtonInput * _touchpadButton;
    GCControllerDirectionPad * _touchpadPrimary;
    GCControllerDirectionPad * _touchpadSecondary;
}

@property (nonatomic, readonly) GCControllerButtonInput *touchpadButton;
@property (nonatomic, readonly) GCControllerDirectionPad *touchpadPrimary;
@property (nonatomic, readonly) GCControllerDirectionPad *touchpadSecondary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateExtendedSupport;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)initializeExtraControllerElements;
- (id)touchpadButton;
- (id)touchpadPrimary;
- (id)touchpadSecondary;

@end
