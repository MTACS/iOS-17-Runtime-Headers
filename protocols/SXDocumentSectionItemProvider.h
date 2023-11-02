
@protocol SXDocumentSectionItemProvider <NSObject>

@required

- (double)sectionItemHeightForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(UITraitCollection *)arg2;
- (UIViewController *)sectionItemViewController;

@end
