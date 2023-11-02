
@interface PXPeopleBootstrapSummaryViewController : UIViewController <PXPeopleFlowViewController> {
    PXPeopleBootstrapContext * _bootstrapContext;
    <PXPeoplePickerConfigurationControllerDelegate> * _configControllerDelegate;
    UILabel * _descriptionLabel;
    UILabel * _promptLabel;
    bool  _useLowMemoryMode;
    bool  _wantsCancelButton;
}

@property (nonatomic) <PXPeopleFlowViewControllerActionDelegate> *actionDelegate;
@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (nonatomic) <PXPeoplePickerConfigurationControllerDelegate> *configControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) UILabel *promptLabel;
@property (nonatomic, readonly) bool shouldConfirmAdvancement;
@property (readonly) Class superclass;
@property (nonatomic) bool useLowMemoryMode;
@property (nonatomic, readonly) bool wantsCancelButton;

- (void).cxx_destruct;
- (id)_localizedDescriptionString;
- (id)_localizedPromptString;
- (id)_localizedTitleString;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)bootstrapContext;
- (id)configControllerDelegate;
- (id)descriptionLabel;
- (id)initWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)promptLabel;
- (void)setConfigControllerDelegate:(id)arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUI;
- (bool)useLowMemoryMode;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsCancelButton;

@end
