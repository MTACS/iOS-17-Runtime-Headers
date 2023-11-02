
@interface CFXStageManagerWarningViewController : UIViewController {
    <CFXStageManagerWarningViewControllerDelegate> * _delegate;
    PUReviewScreenDoneButton * _doneButton;
}

@property (nonatomic) <CFXStageManagerWarningViewControllerDelegate> *delegate;
@property (nonatomic, retain) PUReviewScreenDoneButton *doneButton;
@property (nonatomic, readonly) bool isMultitasking;

- (void).cxx_destruct;
- (id)delegate;
- (id)doneButton;
- (void)doneButtonTapped:(id)arg1;
- (bool)isMultitasking;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (bool)showDoneButton;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
