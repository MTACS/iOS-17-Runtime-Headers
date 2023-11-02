
@interface PXYearAssetsSectionHeaderLayoutSpec : PXCuratedLibrarySectionHeaderLayoutSpec {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  padding;
}

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 variant:(long long)arg4;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 variant:(long long)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
