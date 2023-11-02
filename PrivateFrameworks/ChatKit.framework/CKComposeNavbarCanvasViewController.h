
@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate> {
    UIButton * _cancelButton;
    CKNavigationBarCanvasView * _canvasView;
    UIViewController<CKNavbarCanvasViewControllerDelegate> * _delegate;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIViewController<CKNavbarCanvasViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_initializeForTraitCollection:(id)arg1;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (void)_setupDefaultCanvasView;
- (id)_windowTraitCollection;
- (id)cancelButton;
- (id)canvasView;
- (id)delegate;
- (void)loadView;
- (id)locationLabel;
- (void)setCancelButton:(id)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldConfigureForJunkModal;
- (bool)shouldShowAvatarView;
- (bool)splitViewControllerIsCollapsed;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })systemMinimumLayoutMarginsForView:(id)arg1;
- (id)titleLabel;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
