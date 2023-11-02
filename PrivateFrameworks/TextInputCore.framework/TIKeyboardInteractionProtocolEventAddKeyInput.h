
@interface TIKeyboardInteractionProtocolEventAddKeyInput : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIKeyboardInput * _keyboardInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIKeyboardInput *keyboardInput;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyInput:(id)arg1 keyboardState:(id)arg2;
- (id)keyboardInput;
- (void)sendTo:(id)arg1;

@end
