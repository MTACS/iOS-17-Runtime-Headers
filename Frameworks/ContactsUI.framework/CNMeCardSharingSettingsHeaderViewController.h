
@interface CNMeCardSharingSettingsHeaderViewController : UIViewController <CNMeCardSharingAvatarViewControllerDelegate> {
    <CNMeCardSharingAvatarProvider> * _avatarProvider;
    CNMeCardSharingAvatarViewController * _avatarViewController;
    <CNMeCardSharingSettingsHeaderViewControllerDelegate> * _delegate;
    UIButton * _labelButton;
    long long  _mode;
    UIView * _separatorView;
}

@property (nonatomic, retain) <CNMeCardSharingAvatarProvider> *avatarProvider;
@property (nonatomic, retain) CNMeCardSharingAvatarViewController *avatarViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingSettingsHeaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *labelButton;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) double separatorHeight;
@property (nonatomic, retain) UIView *separatorView;
@property (readonly) Class superclass;

+ (double)avatarEdgeLengthForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (double)availableAvatarSpace;
- (id)avatarProvider;
- (id)avatarViewController;
- (void)avatarViewControllerDidUpdateImage:(id)arg1 needsLayout:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarViewControllerFrame;
- (void)avatarViewControllerWasTapped:(id)arg1;
- (id)delegate;
- (double)desiredHeightForTraitCollection:(id)arg1;
- (id)initWithAvatarProvider:(id)arg1;
- (id)initWithAvatarProvider:(id)arg1 mode:(long long)arg2;
- (id)labelButton;
- (void)labelButtonTapped:(id)arg1;
- (double)maxAvatarHeight;
- (double)maxHeight;
- (double)minAvatarHeight;
- (double)minBottomPadding;
- (double)minHeight;
- (long long)mode;
- (void)reload;
- (double)separatorHeight;
- (id)separatorView;
- (void)setAvatarProvider:(id)arg1;
- (void)setAvatarViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabelButton:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)updateButtonLabel;
- (void)updateLabelButtonFrame;
- (void)updateWithAvatarProvider:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
