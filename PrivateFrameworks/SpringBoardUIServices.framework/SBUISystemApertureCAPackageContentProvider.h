
@interface SBUISystemApertureCAPackageContentProvider : SBUISystemApertureAspectFittingContentProvider {
    _SBUISystemApertureCAPackageView * _packageView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicPackageSize;

- (void).cxx_destruct;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicPackageSize;
- (id)publishedObjectWithName:(id)arg1;
- (void)setIntrinsicPackageSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)setState:(id)arg1 animated:(bool)arg2;

@end
