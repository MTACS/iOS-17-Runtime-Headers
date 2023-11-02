
@interface PRXCardContentViewController : UIViewController <PRXCardContentProviding, PRXPullDismissalProvider, ProximityAppleIDSetupUI.PASUIGuardianPresentationViewController, UIScrollViewDelegate> {
    NSArray * _actions;
    NSAttributedString * _attributedSubtitle;
    NSString * _bottomTrayTitle;
    PRXCardContentView * _contentView;
    PRXAction * _dismissButtonAction;
    unsigned long long  _dismissalType;
    PRXPullDismissalInteractionDriver * _pullDismissalInteractionDriver;
    bool  _shouldAutoScrollToBottom;
    NSString * _subtitle;
    PRXTransitioningController * _transitionController;
    bool  _transitioningSize;
    PRXCardContentWrapperView * _wrapperView;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) bool allowsPullToDismiss;
@property (nonatomic, copy) NSAttributedString *attributedSubtitle;
@property (nonatomic, retain) UIImageView *bottomTrayImageView;
@property (nonatomic, copy) NSString *bottomTrayTitle;
@property (nonatomic, readonly) long long cardStyle;
@property (nonatomic, readonly) PRXCardContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PRXAction *dismissButtonAction;
@property (nonatomic) unsigned long long dismissalType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRXButton *infoButton;
@property (nonatomic, retain) PRXAction *infoButtonAction;
@property (nonatomic, readonly) <_TtP23ProximityAppleIDSetupUI29PASUIGuardianPresentationView_> *mainView;
@property (nonatomic, readonly) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

// Image: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit

+ (Class)contentViewClass;

- (void).cxx_destruct;
- (void)_prxCommonInit;
- (void)_updateActionButtons;
- (void)_updateDismisalControls;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)actions;
- (id)addAction:(id)arg1;
- (bool)allowsPullToDismiss;
- (id)attributedSubtitle;
- (id)bottomTray;
- (id)bottomTrayImageView;
- (id)bottomTrayTitle;
- (long long)cardStyle;
- (id)contentView;
- (id)dismissButtonAction;
- (id)dismissalConfirmationActionWithTitle:(id)arg1 message:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (unsigned long long)dismissalType;
- (void)hideActivityIndicator;
- (id)infoButton;
- (id)infoButtonAction;
- (id)initWithContentView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)pullDismissalInteractionDriver;
- (void)removeAction:(id)arg1;
- (void)removeBottomTray;
- (void)scrollToBottom;
- (void)setAttributedSubtitle:(id)arg1;
- (void)setBottomTrayImageView:(id)arg1;
- (void)setBottomTrayTitle:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDismissButtonAction:(id)arg1;
- (void)setDismissalType:(unsigned long long)arg1;
- (void)setInfoButtonAction:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransitioningSize:(bool)arg1;
- (void)showActivityIndicatorWithStatus:(id)arg1;
- (id)subtitle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CarPlaySetup.framework/CarPlaySetup

- (void)carSetup_addCarPlayIconCenteredInMainContent;
- (id)carSetup_carPlayIconView;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (void)_handleSubtitleTouchForOpenURL:(id)arg1;
- (void)addLearnMoreButtonWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3;
- (void)addLearnMoreButtonWithURL:(id)arg1;
- (void)addMoreOptionsButtonWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3;
- (void)appendButtonWithKey:(id)arg1 target:(id)arg2 action:(SEL)arg3 userInfo:(id)arg4;
- (void)openURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProximityAppleIDSetupUI.framework/ProximityAppleIDSetupUI

- (id)mainView;
- (void)setActivityStatusWithText:(id)arg1;
- (id)viewController;

@end
