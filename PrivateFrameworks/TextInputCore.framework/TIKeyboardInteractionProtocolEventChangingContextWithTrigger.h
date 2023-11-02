
@interface TIKeyboardInteractionProtocolEventChangingContextWithTrigger : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    NSString * _contextChangeTrigger;
}

@property (nonatomic, readonly) NSString *contextChangeTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextChangeTrigger;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextChangeTrigger:(id)arg1;
- (void)sendTo:(id)arg1;

@end
