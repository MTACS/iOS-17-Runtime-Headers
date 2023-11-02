
@interface GCDualSenseGamepad : GCExtendedGamepad {
    GCControllerButtonInput * _touchpadButton;
    GCControllerDirectionPad * _touchpadPrimary;
    GCControllerDirectionPad * _touchpadSecondary;
}

@property (nonatomic, readonly) GCDualSenseAdaptiveTrigger *leftTrigger;
@property (nonatomic, readonly) GCDualSenseAdaptiveTrigger *rightTrigger;
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
- (void)populateEncodedInitInfo:(struct { struct { id x_1_1_1; bool x_1_1_2; bool x_1_1_3; union { struct { int x_1_3_1; bool x_1_3_2; float x_1_3_3; long long x_1_3_4; } x_4_2_1; struct { int x_2_3_1; int x_2_3_2; int x_2_3_3; int x_2_3_4; } x_4_2_2; } x_1_1_4; int x_1_1_5; bool x_1_1_6; bool x_1_1_7; bool x_1_1_8; id x_1_1_9; id x_1_1_10; } x1[16]; bool x2; bool x3; }*)arg1;
- (id)touchpadButton;
- (id)touchpadPrimary;
- (id)touchpadSecondary;

@end
