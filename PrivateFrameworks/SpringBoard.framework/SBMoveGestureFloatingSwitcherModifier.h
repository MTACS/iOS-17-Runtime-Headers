
@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier {
    bool  _hideSlideOverTongueForDragFromStashedConfiguration;
    long long  _initialFloatingConfiguration;
    long long  _interfaceOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (nonatomic) bool hideSlideOverTongueForDragFromStashedConfiguration;
@property (nonatomic) long long initialFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) struct CGPoint { double x1; double x2; } translation;

- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutToAttachSlideOverTongue;
- (id)appLayoutsToCacheSnapshots;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerViewBounds;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (bool)hideSlideOverTongueForDragFromStashedConfiguration;
- (id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (long long)initialFloatingConfiguration;
- (long long)interfaceOrientation;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setHideSlideOverTongueForDragFromStashedConfiguration:(bool)arg1;
- (void)setInitialFloatingConfiguration:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;
- (id)topMostLayoutElements;
- (struct CGPoint { double x1; double x2; })translation;
- (id)visibleAppLayouts;

@end
