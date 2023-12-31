
@interface PXPhotosDetailsHeaderSpec : PXFeatureSpec {
    unsigned long long  _contentInsetEdges;
    double  _defaultCornerRadius;
}

@property (nonatomic, readonly) unsigned long long contentInsetEdges;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } playButtonSize;

- (unsigned long long)contentInsetEdges;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
- (double)defaultCornerRadius;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })playButtonSize;

@end
