
@interface NewsArticles.SponsoredHeaderViewController : UIViewController <SXDocumentSectionItemProvider> {
    void headerDelegate;
    void label;
    void renderer;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)sectionItemHeightForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)sectionItemViewController;
- (void)viewDidLoad;

@end
