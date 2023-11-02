
@interface PSUICellularDataPlanListGroup : NSObject <PSSpecifierGroup, TSSIMSetupDelegate> {
    PSSpecifier * _addNewPlanSpecifier;
    UIViewController * _firstViewController;
    TSSIMSetupFlow * _flow;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    id  _originAccessoryView;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) PSSpecifier *addNewPlanSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIViewController *firstViewController;
@property (retain) TSSIMSetupFlow *flow;
@property (nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *listController;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;

+ (id)groupWithListController:(id)arg1 groupSpecifier:(id)arg2;
+ (id)key;

- (void).cxx_destruct;
- (void)_showSpinner:(bool)arg1;
- (void)_showWifiAlert;
- (void)addNewPlanPressed:(id)arg1;
- (id)addNewPlanSpecifier;
- (id)firstViewController;
- (id)flow;
- (id)getLogger;
- (id)groupSpecifier;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)listController;
- (void)listController:(id)arg1 didSelectSpecifier:(id)arg2;
- (void)selectPlanWithSpecifier:(id)arg1;
- (void)setAddNewPlanSpecifier:(id)arg1;
- (void)setFirstViewController:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setListController:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setUpPendingTransferPlanSpecifiers:(id)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)specifiers;
- (id)spinner;
- (void)turnOnLocationServicesPressed:(id)arg1;

@end
