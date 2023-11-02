
@interface PXStoryMemoryFeedItemExtendedTraitCollection : PXStoryExtendedTraitCollection {
    double  _bottomTitleContentOffset;
    bool  _isFullscreen;
    long long  _userInterfaceFeature;
    double  _viewportCornerRadius;
    NSShadow * _viewportShadow;
}

@property (nonatomic, readonly) bool isFullscreen;

- (void).cxx_destruct;
- (double)bottomTitleContentOffset;
- (id)initWithSpecManager:(id)arg1 initialReferenceSize:(struct CGSize { double x1; double x2; })arg2 isFullscreen:(bool)arg3;
- (bool)isFullscreen;
- (long long)userInterfaceFeature;
- (double)viewportCornerRadius;
- (id)viewportShadow;

@end
