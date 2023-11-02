
@interface OBButtonTray : UIView {
    UIView * _backdropContainer;
    long long  _backdropStyle;
    OBButtonTrayLayoutGuide * _buttonLayoutGuide;
    NSLayoutConstraint * _buttonViewBottomConstraint;
    NSLayoutConstraint * _buttonViewLeadingConstraint;
    NSLayoutConstraint * _buttonViewTopConstraint;
    NSLayoutConstraint * _buttonViewTrailingConstraint;
    NSMutableArray * _buttons;
    OBLinkableTemplateLabel * _captionLabel;
    long long  _captionStyle;
    bool  _detached;
    UIView * _effectView;
    UIViewController * _parentViewController;
    UIView * _privacyContainer;
    OBPrivacyLinkController * _privacyLinkController;
    NSLayoutConstraint * _privacyLinkControllerLeadingConstraint;
    NSLayoutConstraint * _privacyLinkControllerTrailingConstraint;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) NSArray *allButtons;
@property (nonatomic, retain) UIView *backdropContainer;
@property (nonatomic) long long backdropStyle;
@property (nonatomic, retain) OBButtonTrayLayoutGuide *buttonLayoutGuide;
@property (nonatomic, retain) UILayoutGuide *buttonLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *buttonViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *buttonViewTrailingConstraint;
@property (nonatomic, retain) NSMutableArray *buttons;
@property (nonatomic, retain) OBLinkableTemplateLabel *captionLabel;
@property (nonatomic) long long captionStyle;
@property (getter=isDetached, nonatomic) bool detached;
@property (nonatomic, retain) UIView *effectView;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UIView *privacyContainer;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic, retain) NSLayoutConstraint *privacyLinkControllerLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *privacyLinkControllerTrailingConstraint;
@property (nonatomic, retain) UIStackView *stackView;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (void).cxx_destruct;
- (double)_privacyLinkControllerBottomPadding;
- (void)_setCaptionText:(id)arg1 style:(long long)arg2 learnMoreURL:(id)arg3;
- (void)_setUpBackdrops;
- (bool)_shouldHandleLandscapeiPhoneLayout;
- (void)_updateButtonConstraints;
- (void)_updateCaptionTextAppearance;
- (void)_updateTrayVisibility;
- (void)addButton:(id)arg1;
- (void)addCaptionText:(id)arg1;
- (void)addPrivacyLinkForBundles:(id)arg1;
- (id)allButtons;
- (id)backdropContainer;
- (long long)backdropStyle;
- (double)bottomPadding;
- (id)buttonLayoutGuide;
- (id)buttonViewBottomConstraint;
- (id)buttonViewLeadingConstraint;
- (id)buttonViewTopConstraint;
- (id)buttonViewTrailingConstraint;
- (id)buttons;
- (id)captionLabel;
- (long long)captionStyle;
- (struct CGSize { double x1; double x2; })detachedSize;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)effectView;
- (bool)hasContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDetached;
- (void)layoutSubviews;
- (id)parentViewController;
- (id)privacyContainer;
- (id)privacyLinkController;
- (id)privacyLinkControllerLeadingConstraint;
- (id)privacyLinkControllerTrailingConstraint;
- (void)removeAllButtons;
- (void)removeButton:(id)arg1;
- (void)removeFromSuperview;
- (void)setBackdropContainer:(id)arg1;
- (void)setBackdropStyle:(long long)arg1;
- (void)setButtonLayoutGuide:(id)arg1;
- (void)setButtonViewBottomConstraint:(id)arg1;
- (void)setButtonViewLeadingConstraint:(id)arg1;
- (void)setButtonViewTopConstraint:(id)arg1;
- (void)setButtonViewTrailingConstraint:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setCaptionStyle:(long long)arg1;
- (void)setCaptionText:(id)arg1;
- (void)setCaptionText:(id)arg1 learnMoreURL:(id)arg2;
- (void)setCaptionText:(id)arg1 style:(long long)arg2;
- (void)setCaptionText:(id)arg1 style:(long long)arg2 learnMoreURL:(id)arg3;
- (void)setDetached:(bool)arg1;
- (void)setEffectView:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPrivacyContainer:(id)arg1;
- (void)setPrivacyLinkController:(id)arg1;
- (void)setPrivacyLinkControllerLeadingConstraint:(id)arg1;
- (void)setPrivacyLinkControllerTrailingConstraint:(id)arg1;
- (void)setPrivacyLinkForBundles:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)showButtonsAvailable;
- (void)showButtonsBusy;
- (id)stackView;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

- (void)addHeaderView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport

- (bool)_containsButton:(id)arg1;
- (bool)_containsSSOBBoldTrayButton;
- (id)_hide;
- (void)_show:(id)arg1;

@end
