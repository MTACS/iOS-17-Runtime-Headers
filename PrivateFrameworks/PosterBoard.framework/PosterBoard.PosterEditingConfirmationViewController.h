
@interface PosterBoard.PosterEditingConfirmationViewController : UIViewController {
    void backgroundView;
    void buttonFont;
    void contentView;
    void continueButton;
    void customizeHomeButton;
    void delegate;
    void homePreviewContainerView;
    void homePreviewContentView;
    void homePreviewHeightConstraint;
    void homePreviewLoadingIndicator;
    void homePreviewView;
    void homePreviewWidthConstraint;
    void lockPreviewHeightConstraint;
    void lockPreviewImage;
    void lockPreviewImageView;
    void lockPreviewLoadingIndicator;
    void lockPreviewWidthConstraint;
    void posterID;
    void previewStackView;
    void userInfo;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
