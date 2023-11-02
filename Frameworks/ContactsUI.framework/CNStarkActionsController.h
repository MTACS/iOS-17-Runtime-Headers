
@interface CNStarkActionsController : UIViewController <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNStarkActionViewDelegate, UINavigationControllerDelegate> {
    CNStarkActionView * _callActionView;
    CNContact * _contact;
    CNStarkActionView * _directionsActionView;
    UIViewController * _disambiguationViewController;
    NSArray * _layoutConstraints;
    CNStarkActionView * _messageActionView;
    <UINavigationControllerDelegate> * _phoneNavigationControllerDelegate;
    CNContactQuickActionsController * _quickActionsController;
    double  _willTransitionToBoundsWidth;
}

@property (nonatomic, readonly) CNStarkActionView *callActionView;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNStarkActionView *directionsActionView;
@property (nonatomic) UIViewController *disambiguationViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, readonly) CNStarkActionView *messageActionView;
@property (nonatomic) <UINavigationControllerDelegate> *phoneNavigationControllerDelegate;
@property (nonatomic, readonly) CNContactQuickActionsController *quickActionsController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic) double willTransitionToBoundsWidth;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)actionViewTapped:(id)arg1;
- (void)addForwardingDelegate;
- (id)callActionView;
- (id)contact;
- (void)contactQuickActionsController:(id)arg1 dismissDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (void)contactQuickActionsController:(id)arg1 presentDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (id)directionsActionView;
- (id)disambiguationViewController;
- (void)forwardDelegateForNavigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)initWithContact:(id)arg1;
- (id)layoutConstraints;
- (id)messageActionView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)phoneNavigationControllerDelegate;
- (id)quickActionsController;
- (void)removeForwardingDelegate;
- (void)resetLayoutConstraints;
- (void)setDisambiguationViewController:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setPhoneNavigationControllerDelegate:(id)arg1;
- (void)setWillTransitionToBoundsWidth:(double)arg1;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)updateViews;
- (void)viewDidLoad;
- (id)viewForActionType:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (double)willTransitionToBoundsWidth;

@end
