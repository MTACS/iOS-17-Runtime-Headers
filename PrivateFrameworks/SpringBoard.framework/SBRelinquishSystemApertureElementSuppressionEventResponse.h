
@interface SBRelinquishSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse {
    NSUUID * _invalidationIdentifier;
}

@property (nonatomic, readonly) NSUUID *invalidationIdentifier;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithInvalidationIdentifier:(id)arg1;
- (id)invalidationIdentifier;
- (long long)type;

@end
