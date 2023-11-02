
@interface NewsArticles.EndOfArticleViewController : UIViewController <NAArticleFooterType, NAEndOfArticleResultProviderType, SXDocumentSectionItemProvider, TUDeselectable> {
    void blueprintViewController;
    void bottomSpacerView;
    void eventHandler;
    void footerDelegate;
    void gutterViewController;
    void overriddenTraitCollection;
    void resultProviderDelegate;
    void styler;
    void urlHandler;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic) <NAArticleFooterDelegate> *footerDelegate;
@property (nonatomic) <NAEndOfArticleResultProviderDelegate> *resultProviderDelegate;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)deselect;
- (id)footerDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)resultProviderDelegate;
- (double)sectionItemHeightForSize:(struct CGSize { double x1; double x2; })arg1 traitCollection:(id)arg2;
- (id)sectionItemViewController;
- (void)setFooterDelegate:(id)arg1;
- (void)setResultProviderDelegate:(id)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)smartInvertStatusDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
