
@protocol SBPIPPositionHyperregionComposerDelegate <NSObject>

@required

- (void)positionRegionComposerDidInvalidate:(id <SBPIPPositionHyperregionComposing>)arg1;
- (void)positionRegionComposerNeedsUpdate:(id <SBPIPPositionHyperregionComposing>)arg1 behavior:(int)arg2;
- (struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })regionComposer:(id <SBPIPPositionHyperregionComposing>)arg1 transformGeometryContext:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg2 toWindowScene:(SBWindowScene *)arg3;
- (SBWindowScene *)targetWindowSceneForRegionComposer:(id <SBPIPPositionHyperregionComposing>)arg1;

@end
