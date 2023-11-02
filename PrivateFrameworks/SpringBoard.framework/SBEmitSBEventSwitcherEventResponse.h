
@interface SBEmitSBEventSwitcherEventResponse : SBSwitcherModifierEventResponse {
    unsigned long long  _eventType;
    NSDictionary * _payload;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)eventType;
- (id)initWithSBEventWithEventType:(unsigned long long)arg1 payload:(id)arg2;
- (id)payload;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
