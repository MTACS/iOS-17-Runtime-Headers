
@protocol TabSnapshotSizing <NSObject>

@required

- (double)desiredSnapshotScale;
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTraitCollection:(UITraitCollection *)arg2;
- (unsigned long long)snapshotBorderOptions;
- (struct CGSize { double x1; double x2; })snapshotSizeForSuggestedSize:(struct CGSize { double x1; double x2; })arg1;

@end
