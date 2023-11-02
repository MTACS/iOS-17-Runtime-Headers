
@interface SBDosidoScaleAnimationSwitcherEventResponse : SBSwitcherModifierEventResponse {
    SBAppLayout * _appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;

- (void).cxx_destruct;
- (id)appLayout;
- (id)initWithAppLayout:(id)arg1;
- (long long)type;

@end
