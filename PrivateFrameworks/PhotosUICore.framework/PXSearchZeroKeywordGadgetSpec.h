
@interface PXSearchZeroKeywordGadgetSpec : PXGadgetSpec {
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutReferenceSize;
    PXExtendedTraitCollection * _traitCollection;
}

- (void).cxx_destruct;
- (id)_contentInsetsInterpolator;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2;

@end
