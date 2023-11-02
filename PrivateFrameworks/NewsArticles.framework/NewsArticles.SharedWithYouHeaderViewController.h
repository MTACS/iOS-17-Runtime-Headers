
@interface NewsArticles.SharedWithYouHeaderViewController : UIViewController <SXDocumentSectionItemProvider> {
    void attributionView;
    void headerDelegate;
    void renderer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sharedItem;
    void sharedItemManager;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)sectionItemHeightForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)sectionItemViewController;
- (void)viewDidLoad;

@end
