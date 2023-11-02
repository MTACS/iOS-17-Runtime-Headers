
@interface TIKeyboardInteractionProtocolEventLayoutDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIKeyboardLayout * _keyLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIKeyboardLayout *keyLayout;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(id)arg1 keyboardState:(id)arg2;
- (id)keyLayout;
- (void)sendTo:(id)arg1;

@end
