
@interface NUDocumentSectionItem : NSObject <SXDocumentSectionItemProvider> {
    <NUDocumentSectionItemHeightProvider> * _heightProvider;
    double  _sectionHeight;
    UITraitCollection * _traitCollection;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NUDocumentSectionItemHeightProvider> *heightProvider;
@property (readonly) double sectionHeight;
@property (readonly) Class superclass;
@property (readonly) UITraitCollection *traitCollection;
@property (readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)heightProvider;
- (id)initWithViewController:(id)arg1 sectionHeight:(double)arg2;
- (double)sectionHeight;
- (double)sectionItemHeightForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)sectionItemViewController;
- (id)traitCollection;
- (id)viewController;

@end
