
@interface SBInitiateSystemApertureBounceSwitcherEventResponse : SBSwitcherModifierEventResponse {
    SBAppLayout * _appLayout;
    NSUUID * _suppressionIdentifierToInvalidate;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) NSUUID *suppressionIdentifierToInvalidate;

- (void).cxx_destruct;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 suppressionIdentifierToInvalidate:(id)arg2;
- (id)suppressionIdentifierToInvalidate;
- (long long)type;

@end
