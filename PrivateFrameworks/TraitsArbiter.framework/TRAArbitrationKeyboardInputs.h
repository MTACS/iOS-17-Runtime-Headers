
@interface TRAArbitrationKeyboardInputs : NSObject <BSDescriptionProviding, NSCopying> {
    NSString * _focusedParticipantUniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *focusedParticipantUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)focusedParticipantUniqueIdentifier;
- (id)initWithKeyboardFocusedParticipantUniqueIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTraitsArbitrationKeyboardInputs:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
