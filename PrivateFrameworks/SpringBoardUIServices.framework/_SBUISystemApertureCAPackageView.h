
@interface _SBUISystemApertureCAPackageView : BSUICAPackageView {
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicPackageSize;
}

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
