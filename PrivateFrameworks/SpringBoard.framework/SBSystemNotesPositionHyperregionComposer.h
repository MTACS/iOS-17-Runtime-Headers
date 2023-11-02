
@interface SBSystemNotesPositionHyperregionComposer : NSObject <SBPIPPositionHyperregionComposing> {
    int  _animationState;
    <SBPIPPositionHyperregionComposerDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _dismissToSize;
    unsigned long long  _offscreenCorners;
    SBPIPPositionHyperregionLibrary * _regionsLibrary;
    unsigned long long  _state;
    <BSInvalidatable> * _stateCaptureInvalidatable;
}

@property (nonatomic, copy) NSArray *connectedWindowScenes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPIPPositionHyperregionComposerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOffscreenCornersToRegions:(id)arg1 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg2;
- (void)_setupStateCapture;
- (unsigned long long)canonicalPositionForPoint:(struct CGPoint { double x1; double x2; })arg1 proposedPosition:(unsigned long long)arg2 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg3 interaction:(struct SBPIPPositionInteractionStateContext { bool x1; bool x2; bool x3; bool x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })arg4;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })defaultCornerPositionForLayoutSettingsPosition:(unsigned long long)arg1 proposedCenter:(struct CGPoint { double x1; double x2; })arg2 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg3 interaction:(struct SBPIPPositionInteractionStateContext { bool x1; bool x2; bool x3; bool x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })arg4;
- (id)delegate;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)performActionsWithTransientStateChange:(id /* block */)arg1;
- (id)positionRegionsForRegions:(id)arg1 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg2 interaction:(struct SBPIPPositionInteractionStateContext { bool x1; bool x2; bool x3; bool x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })arg3;
- (void)setDelegate:(id)arg1;
- (void)setupForEdgeProtectCornerSwipe;
- (void)setupForInteractiveCornerGesture;
- (void)setupForInteractiveCornerGestureEnd;
- (void)setupForInteractiveDismissalToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupForStandardBehavior;
- (void)setupForSwipesFromCorners:(unsigned long long)arg1 animated:(bool)arg2;

@end
