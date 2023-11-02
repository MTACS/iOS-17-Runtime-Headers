
@interface NewsUI2.WebEmbedContainerViewController : UIViewController {
    void embedLocation;
    void eventHandler;
    void layoutAttributesFactory;
    void modalHostStyle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  resource;
    void styler;
    void webEmbedViewController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
