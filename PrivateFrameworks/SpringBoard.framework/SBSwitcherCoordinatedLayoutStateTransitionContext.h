
@interface SBSwitcherCoordinatedLayoutStateTransitionContext : NSObject <BSDescriptionProviding> {
    NSSet * _displayItems;
    SBAppLayout * _fromAppLayout;
    long long  _fromCenterConfiguration;
    long long  _fromFloatingConfiguration;
    SBSwitcherController * _fromSwitcherController;
    SBAppLayout * _toAppLayout;
    SBSwitcherController * _toSwitcherController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *displayItems;
@property (nonatomic, readonly) SBAppLayout *fromAppLayout;
@property (nonatomic, readonly) long long fromCenterConfiguration;
@property (nonatomic, readonly) long long fromFloatingConfiguration;
@property (nonatomic, readonly) SBSwitcherController *fromSwitcherController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBAppLayout *toAppLayout;
@property (nonatomic, readonly) SBSwitcherController *toSwitcherController;

+ (id)coordinatedLayoutStateTransitionContextForMovingDisplayItems:(id)arg1 fromSwitcherController:(id)arg2 fromAppLayout:(id)arg3 toAppLayout:(id)arg4 toSwitcherController:(id)arg5 withApplicationController:(id)arg6;
+ (id)coordinatedLayoutStateTransitionContextForMovingDisplayItems:(id)arg1 toSwitcherController:(id)arg2 toAppLayout:(id)arg3 withApplicationController:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItems;
- (id)fromAppLayout;
- (long long)fromCenterConfiguration;
- (long long)fromFloatingConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromFrameInFromSwitcherForDisplayItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromFrameInToSwitcherForDisplayItem:(id)arg1;
- (id)fromSwitcherController;
- (bool)hasTransitioningDisplayItemsForAppLayout:(id)arg1;
- (bool)hasTransitioningDisplayItemsForSwitcherController:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDisplayItems:(id)arg1 fromSwitcherController:(id)arg2 toSwitcherController:(id)arg3 fromAppLayout:(id)arg4 toAppLayout:(id)arg5;
- (bool)isDisplayItemTransitioning:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)toAppLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toFrameInFromSwitcherForDisplayItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toFrameInToSwitcherForDisplayItem:(id)arg1;
- (id)toSwitcherController;

@end
