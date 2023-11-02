
@interface TPKContentPopoverViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void contentView;
    void popoverDelegate;
    void preferredPopoverWidth;
    void sourceView;
    void sourceViewController;
}

@property (nonatomic, readonly) bool _canShowWhileLocked;
@property (nonatomic, retain) TPKContentView *contentView;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) <UIPopoverPresentationControllerDelegate> *popoverDelegate;
@property (nonatomic, readonly) UIPopoverPresentationController *popoverPresentationController;
@property (nonatomic) double preferredPopoverWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) UIViewController *sourceViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)contentView;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithContentController:(id)arg1 tipContent:(id)arg2 sourceViewController:(id)arg3 popoverDelegate:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)passthroughViewsNeedsUpdate;
- (unsigned long long)permittedArrowDirections;
- (id)popoverDelegate;
- (id)popoverPresentationController;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (double)preferredPopoverWidth;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (void)setPopoverDelegate:(id)arg1;
- (void)setPreferredPopoverWidth:(double)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (id)sourceViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
