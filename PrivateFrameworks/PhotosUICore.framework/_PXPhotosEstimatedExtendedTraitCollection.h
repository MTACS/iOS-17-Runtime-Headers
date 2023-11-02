
@interface _PXPhotosEstimatedExtendedTraitCollection : PXExtendedTraitCollection {
    long long  _layoutOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    long long  _layoutSizeClass;
    long long  _userInterfaceIdiom;
}

- (id)initWithViewController:(id)arg1;
- (long long)layoutOrientation;
- (struct CGSize { double x1; double x2; })layoutReferenceSize;
- (long long)layoutSizeClass;
- (long long)userInterfaceIdiom;

@end
