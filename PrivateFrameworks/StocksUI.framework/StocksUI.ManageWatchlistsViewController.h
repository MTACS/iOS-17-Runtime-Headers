
@interface StocksUI.ManageWatchlistsViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void blueprintViewController;
    void commandCenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  contentMode;
    void descriptionLabel;
    void eventHandler;
    void styler;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)handleDone;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
