
@interface TIKeyboardInteractionProtocolEventAddDrawInputWithSyllableCount : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    NSNumber * _syllableCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *syllableCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)sendTo:(id)arg1;
- (id)syllableCount;

@end
