
@interface SBScrollToAppLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse {
    long long  _alignment;
    bool  _animated;
    SBAppLayout * _appLayout;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) bool animated;
@property (nonatomic, readonly) SBAppLayout *appLayout;

- (void).cxx_destruct;
- (long long)alignment;
- (bool)animated;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 alignment:(long long)arg2 animated:(bool)arg3;
- (long long)type;

@end
