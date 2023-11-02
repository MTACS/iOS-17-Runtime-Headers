
@interface SBiPadOSWindowModeChangeTransitionModifier : SBTransitionSwitcherModifier {
    SBAppLayout * _fromAppLayout;
    SBAppLayout * _toAppLayout;
}

@property (nonatomic, readonly) SBAppLayout *fromAppLayout;
@property (nonatomic, readonly) SBAppLayout *toAppLayout;

- (void).cxx_destruct;
- (id)fromAppLayout;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;
- (bool)isLayoutRoleMatchMovedToScene:(long long)arg1 inAppLayout:(id)arg2;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (id)toAppLayout;

@end
