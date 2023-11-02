
@protocol PXMockMutableExtendedTraitCollection

@required

- (long long)contentSizeCategory;
- (double)displayScale;
- (long long)formFactor;
- (long long)layoutOrientation;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (long long)layoutSizeClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setContentSizeCategory:(long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setFormFactor:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutSizeClass:(long long)arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setVisibleChromeElements:(unsigned long long)arg1;
- (void)setWindowOrientation:(long long)arg1;
- (long long)userInterfaceIdiom;
- (unsigned long long)visibleChromeElements;
- (long long)windowOrientation;

@end
