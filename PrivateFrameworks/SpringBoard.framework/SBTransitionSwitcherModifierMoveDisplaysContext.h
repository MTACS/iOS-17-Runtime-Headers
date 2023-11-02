
@interface SBTransitionSwitcherModifierMoveDisplaysContext : NSObject {
    SBSwitcherCoordinatedLayoutStateTransitionContext * _coordinatedLayoutStateTransitionContext;
    SBSwitcherController * _switcherController;
}

@property (nonatomic, readonly) SBSwitcherCoordinatedLayoutStateTransitionContext *coordinatedLayoutStateTransitionContext;
@property (nonatomic, readonly, copy) NSSet *movingDisplayItems;
@property (nonatomic, readonly) SBSwitcherController *switcherController;

+ (id)moveDisplaysContextWithCoordinatedLayoutStateTransitionContext:(id)arg1 relativeToSwitcherController:(id)arg2;

- (void).cxx_destruct;
- (id)coordinatedLayoutStateTransitionContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromFrameForDisplayItem:(id)arg1;
- (id)initWithCoordinatedLayoutStateTransitionContext:(id)arg1 switcherController:(id)arg2;
- (id)movingDisplayItems;
- (bool)pertainsToAppLayout:(id)arg1;
- (bool)pertainsToDisplayItem:(id)arg1;
- (id)switcherController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toFrameForDisplayItem:(id)arg1;

@end
