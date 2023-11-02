
@interface PXStoryExtendedTraitCollection : PXExtendedTraitCollection {
    double  _bottomTitleContentOffset;
    double  _displayScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    double  _viewportCornerRadius;
    NSShadow * _viewportShadow;
}

@property (nonatomic, readonly) double bottomTitleContentOffset;
@property (nonatomic, readonly) double viewportCornerRadius;
@property (nonatomic, readonly) NSShadow *viewportShadow;

- (void).cxx_destruct;
- (double)bottomTitleContentOffset;
- (double)displayScale;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2;
- (long long)layoutOrientation;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (void)performChanges:(id /* block */)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (double)viewportCornerRadius;
- (id)viewportShadow;

@end
