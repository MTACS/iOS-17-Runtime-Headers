
@interface CNAvatarCaptureViewController : UIViewController {
    <AVTAvatarRecord> * _avatarRecord;
    AVTView * _avtView;
    NSLayoutConstraint * _avtViewHeightConstraint;
    UIButton * _cancelButton;
    CNCaptureButtonView * _captureButtonView;
    UIView * _captureFooter;
    UIImage * _capturedImage;
    <CNAvatarCaptureViewControllerDelegate> * _delegate;
    UILabel * _promptLabel;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) AVTView *avtView;
@property (nonatomic) NSLayoutConstraint *avtViewHeightConstraint;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) CNCaptureButtonView *captureButtonView;
@property (nonatomic, retain) UIView *captureFooter;
@property (nonatomic, retain) UIImage *capturedImage;
@property (nonatomic) <CNAvatarCaptureViewControllerDelegate> *delegate;
@property (nonatomic, retain) UILabel *promptLabel;

- (void).cxx_destruct;
- (void)addPromptLabel;
- (id)avatarRecord;
- (id)avtView;
- (id)avtViewHeightConstraint;
- (id)cancelButton;
- (id)captureButtonView;
- (id)captureFooter;
- (id)capturedImage;
- (id)delegate;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapCaptureButton:(id)arg1;
- (void)dismissCaptureController;
- (id)initWithAvatarRecord:(id)arg1;
- (void)layoutFooterView;
- (void)loadAvatarView;
- (id)promptLabel;
- (void)setAvatarRecord:(id)arg1;
- (void)setAvtView:(id)arg1;
- (void)setAvtViewHeightConstraint:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCaptureButtonView:(id)arg1;
- (void)setCaptureFooter:(id)arg1;
- (void)setCapturedImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPromptLabel:(id)arg1;
- (void)setupFooterView;
- (bool)shouldUseLandscapeLayout;
- (void)updateAvtViewAspectRatioConstraint;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
