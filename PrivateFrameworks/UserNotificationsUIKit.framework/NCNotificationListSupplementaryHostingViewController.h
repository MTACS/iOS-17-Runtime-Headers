
@interface NCNotificationListSupplementaryHostingViewController : UIViewController <BSDescriptionProviding, NCMaterialDisplaying, NCNotificationListDimmable, NCNotificationListPresentable, NCNotificationListSupplementaryHostingViewDelegate, PLContentSizeCategoryAdjusting> {
    NCNotificationListSupplementaryViewConfiguration * _configuration;
    bool  _contentVisible;
    <NCNotificationListSupplementaryHostingViewControllerDelegate> * _delegate;
    UIViewController * _hostedViewController;
    NSString * _materialGroupNameBase;
    long long  _materialRecipe;
    UIColor * _materialTintColor;
    NSString * _sectionIdentifier;
    UIColor * _textColor;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NCNotificationListSupplementaryViewConfiguration *configuration;
@property (getter=isContentVisible, nonatomic) bool contentVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSupplementaryHostingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *hostedViewController;
@property (getter=isHostedViewControllerUserInteractionEnabled, nonatomic) bool hostedViewControllerUserInteractionEnabled;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic) long long materialRecipe;
@property (nonatomic, copy) UIColor *materialTintColor;
@property (nonatomic, readonly) PLPlatterView *platterView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureAuxiliaryViewAnimated:(bool)arg1;
- (void)_configureHostingViewAnimated:(bool)arg1;
- (id)_hostingView;
- (id)_logDescription;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (void)_showAuxiliaryOptionsView:(bool)arg1;
- (bool)_useDefaultLookForColor:(id)arg1 materialRecipe:(long long)arg2;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)configuration;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hostedViewController;
- (id)initWithHostedViewController:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)isContentVisible;
- (bool)isHostedViewControllerUserInteractionEnabled;
- (void)loadView;
- (id)materialGroupNameBase;
- (long long)materialRecipe;
- (id)materialTintColor;
- (long long)overrideUserInterfaceStyle;
- (id)platterView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)sectionIdentifier;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 animated:(bool)arg2;
- (void)setContentVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostedViewControllerUserInteractionEnabled:(bool)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setMaterialTintColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)supplementaryHostingViewWasTapped:(id)arg1;
- (id)textColor;

@end
