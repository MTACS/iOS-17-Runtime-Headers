
@interface GCXboxGamepad : GCExtendedGamepad {
    GCControllerButtonInput * _paddleButton1;
    GCControllerButtonInput * _paddleButton2;
    GCControllerButtonInput * _paddleButton3;
    GCControllerButtonInput * _paddleButton4;
    long long  _type;
}

@property (nonatomic, readonly) GCControllerButtonInput *buttonShare;
@property (nonatomic, readonly) GCControllerButtonInput *paddleButton1;
@property (nonatomic, readonly) GCControllerButtonInput *paddleButton2;
@property (nonatomic, readonly) GCControllerButtonInput *paddleButton3;
@property (nonatomic, readonly) GCControllerButtonInput *paddleButton4;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonShare;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)initializeExtraControllerElements;
- (id)paddleButton1;
- (id)paddleButton2;
- (id)paddleButton3;
- (id)paddleButton4;
- (void)setType:(long long)arg1;
- (long long)type;

@end
