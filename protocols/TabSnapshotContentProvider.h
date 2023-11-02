
@protocol TabSnapshotContentProvider <NSObject>

@optional

- (bool)checkAndResetIfNextSnapshotRequiresScreenUpdates;
- (void)prepareForSnapshotOfSize:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (UIColor *)snapshotBackgroundColor;
- (UIImage *)snapshotContentImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotContentRectInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)snapshotContentShouldUnderlapTopBackdrop;
- (UIView *)snapshotContentView;

@end
