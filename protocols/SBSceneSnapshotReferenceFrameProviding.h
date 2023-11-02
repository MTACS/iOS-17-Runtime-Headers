
@protocol SBSceneSnapshotReferenceFrameProviding <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrameForInterfaceOrientation:(long long)arg1 centerConfiguration:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrameForInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrameForInterfaceOrientation:(long long)arg1 layoutRole:(long long)arg2 appLayout:(SBAppLayout *)arg3 isInsetForHomeAffordance:(bool)arg4;

@end
