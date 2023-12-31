
@interface UIForcePresentationHelper : NSObject

+ (void)applyPhase:(unsigned long long)arg1 toSnapshotView:(id)arg2;
+ (id)snapshotViewForSourceView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRectForView:(id)arg1 proposedSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)visualEffectForPresentationPhase:(unsigned long long)arg1 traitCollection:(id)arg2 variant:(long long)arg3;

@end
