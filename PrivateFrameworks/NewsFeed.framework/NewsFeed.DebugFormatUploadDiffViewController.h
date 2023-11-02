
@interface NewsFeed.DebugFormatUploadDiffViewController : UIViewController {
    void changeSet;
    void changeSetLabel;
    void editor;
    void localDiffGutterView;
    void localDiffView;
    void remoteDiffGutterView;
    void remoteDiffView;
    void styler;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)doDismiss;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
