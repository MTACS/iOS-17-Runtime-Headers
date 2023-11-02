
@interface SBHStackConfigurationBackgroundViewController : CCUICustomContentModuleBackgroundViewController {
    struct CGSize { 
        double width; 
        double height; 
    }  _apertureSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } apertureSize;

- (struct CGSize { double x1; double x2; })apertureSize;
- (double)expandedContentModuleHeight;
- (double)expandedContentModuleWidth;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setApertureSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFooterButtons:(id)arg1;

@end
