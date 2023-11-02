
@interface SBInvalidateContinuousExposeIdentifiersEventResponse : SBSwitcherModifierEventResponse {
    bool  _animated;
    SBAppLayout * _transitioningFromAppLayout;
    SBAppLayout * _transitioningToAppLayout;
}

@property (nonatomic, readonly) bool animated;
@property (nonatomic, readonly) SBAppLayout *transitioningFromAppLayout;
@property (nonatomic, readonly) SBAppLayout *transitioningToAppLayout;

- (void).cxx_destruct;
- (bool)animated;
- (id)initWithTransitioningFromAppLayout:(id)arg1 transitioningToAppLayout:(id)arg2 animated:(bool)arg3;
- (id)transitioningFromAppLayout;
- (id)transitioningToAppLayout;
- (long long)type;

@end
