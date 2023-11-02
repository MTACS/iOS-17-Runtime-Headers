
@interface TIKeyboardInteractionProtocolEventSetClientID : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    NSString * _clientID;
}

@property (nonatomic, readonly) NSString *clientID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientID:(id)arg1 keyboardState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;

@end
