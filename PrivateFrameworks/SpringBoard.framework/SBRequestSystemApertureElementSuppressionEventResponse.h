
@interface SBRequestSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse {
    SBAppLayout * _appLayout;
    NSUUID * _invalidationIdentifier;
    bool  _wantsGlobalSuppression;
    bool  _wantsKeyLineEnabled;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) NSUUID *invalidationIdentifier;
@property (nonatomic, readonly) bool wantsGlobalSuppression;
@property (nonatomic, readonly) bool wantsKeyLineEnabled;

- (void).cxx_destruct;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 wantsGlobalSuppression:(bool)arg2 wantsKeyLineEnabled:(bool)arg3 invalidationIdentifier:(id)arg4;
- (id)invalidationIdentifier;
- (long long)type;
- (bool)wantsGlobalSuppression;
- (bool)wantsKeyLineEnabled;

@end
