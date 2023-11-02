
@interface TIKeyboardInteractionProtocolBase : NSObject <NSSecureCoding> {
    TIKeyboardState * _keyboardState;
}

@property (nonatomic, readonly) TIKeyboardState *keyboardState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (id)keyboardState;

@end
