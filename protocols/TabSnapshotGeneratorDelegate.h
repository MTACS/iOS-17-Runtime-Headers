
@protocol TabSnapshotGeneratorDelegate <NSObject>

@required

- (struct CGSize { double x1; double x2; })contentSizeForSnapshotGenerator:(TabSnapshotGenerator *)arg1;
- (double)topBarsHeightForSnapshotGenerator:(TabSnapshotGenerator *)arg1;

@end
