
@interface CKComposeNavbarManager : NSObject {
    CKNavbarCanvasViewController * _avatarNavbarCanvasViewController;
    CKComposeNavbarManagerContentView * _composeContentView;
    UIView * _customStatusBackgroundView;
    CKComposeNavbarCanvasViewController * _defaultNavbarCanvasViewController;
}

@property (nonatomic, retain) CKNavbarCanvasViewController *avatarNavbarCanvasViewController;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, retain) CKComposeNavbarManagerContentView *composeContentView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *customStatusBackgroundView;
@property (nonatomic, retain) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController;

- (void).cxx_destruct;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(bool)arg2;
- (void)_setupDefaultNavbarCanvasViewControllerForBusinessChat:(bool)arg1;
- (id)avatarNavbarCanvasViewController;
- (id)cancelButton;
- (void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(bool)arg2;
- (id)composeContentView;
- (id)contentView;
- (id)customStatusBackgroundView;
- (void)dealloc;
- (id)defaultNavbarCanvasViewController;
- (id)initForBusinessChat:(bool)arg1;
- (void)setAvatarNavbarCanvasViewController:(id)arg1;
- (void)setCanvasViewControllerDelegate:(id)arg1;
- (void)setComposeContentView:(id)arg1;
- (void)setDefaultNavbarCanvasViewController:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(bool)arg2;

@end
