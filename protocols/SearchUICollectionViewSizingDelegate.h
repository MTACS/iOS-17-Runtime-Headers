
@protocol SearchUICollectionViewSizingDelegate <NSObject>

@required

- (void)contentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (SearchUICollectionViewLayoutConfiguration *)currentSnapshotLayoutConfiguration;

@end
