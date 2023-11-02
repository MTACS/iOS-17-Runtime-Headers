
@interface SBSystemAperturePillImageView : UIImageView {
    struct CGSize { 
        double width; 
        double height; 
    }  _systemApertureSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } systemApertureSize;

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setSystemApertureSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemApertureSize;

@end
