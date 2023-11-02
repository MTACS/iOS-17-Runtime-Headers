
@interface SBInjectVelocitySwitcherEventResponse : SBSwitcherModifierEventResponse {
    SBAppLayout * _appLayout;
    NSString * _key;
    id  _velocity;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) id velocity;

- (void).cxx_destruct;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVelocity:(id)arg1 forKey:(id)arg2 appLayout:(id)arg3;
- (id)key;
- (long long)type;
- (id)velocity;

@end
