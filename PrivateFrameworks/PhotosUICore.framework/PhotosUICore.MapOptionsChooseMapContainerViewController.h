
@interface PhotosUICore.MapOptionsChooseMapContainerViewController : UIViewController <UIScrollViewDelegate> {
    void chooseMapViewController;
    void contentLayoutGuide;
    void contentLayoutGuideTopConstraint;
    void headerBlurredBackgroundView;
    void headerLabel;
    void headerViewSeparator;
    void scrollView;
    void scrollViewContentView;
    void viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
