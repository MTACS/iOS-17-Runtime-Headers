
@interface CNContactQuickActionsController : NSObject <CNContactActionsControllerDelegate, CNUIUserActionListConsumer> {
    <CNCancelable> * _actionDisoveryToken;
    NSDictionary * _actionListModelsByActionType;
    NSArray * _actionTypes;
    CNContact * _contact;
    <CNContactQuickActionViewContainer> * _contactQuickActionViewContainer;
    <CNContactQuickActionsControllerDelegate> * _delegate;
    CNContactActionsController * _disambiguationMenuController;
    CNContactQuickActionsDisambiguationMenuPresentation * _disambiguationMenuPresentation;
    UIViewController * _disambiguationMenuViewController;
    <CNUINavigationListStyle> * _navigationListStyle;
    <CNSchedulerProvider> * _schedulerProvider;
    <CNUIUserActionContext> * _userActionContext;
    <CNUIUserActionListDataSource> * _userActionListDataSource;
}

@property (nonatomic, retain) <CNCancelable> *actionDisoveryToken;
@property (nonatomic, retain) NSDictionary *actionListModelsByActionType;
@property (nonatomic, readonly) NSArray *actionTypes;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) <CNContactQuickActionViewContainer> *contactQuickActionViewContainer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactQuickActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactActionsController *disambiguationMenuController;
@property (nonatomic, readonly) CNContactQuickActionsDisambiguationMenuPresentation *disambiguationMenuPresentation;
@property (nonatomic, retain) UIViewController *disambiguationMenuViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNUINavigationListStyle> *navigationListStyle;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNUIUserActionContext> *userActionContext;
@property (nonatomic, readonly) <CNUIUserActionListDataSource> *userActionListDataSource;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (id)sharedDataSource;

- (void).cxx_destruct;
- (id)actionDisoveryToken;
- (id)actionListModelsByActionType;
- (id)actionTypes;
- (id)allModelsObservable;
- (void)cleanUpAfterLatestActionDiscovery;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)contactQuickActionViewContainer;
- (void)dealloc;
- (id)defaultTitleForActionType:(id)arg1;
- (id)delegate;
- (id)disambiguationMenuController;
- (id)disambiguationMenuPresentation;
- (id)disambiguationMenuViewController;
- (void)disambiguationViewControllerDismissedExternally:(id)arg1;
- (void)discoverActions;
- (void)executeLongPressBehaviorForActionType:(id)arg1;
- (void)executeTapBehaviorForActionType:(id)arg1;
- (id)init;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3;
- (id)initWithActionTypes:(id)arg1 contactQuickActionViewContainer:(id)arg2 disambiguationMenuPresentation:(id)arg3 userActionListDataSource:(id)arg4 schedulerProvider:(id)arg5 userActionContext:(id)arg6;
- (id)navigationListStyle;
- (void)performAction:(id)arg1;
- (void)processDiscoveredModels:(id)arg1;
- (void)reportStoredModel:(id)arg1 forActionType:(id)arg2 toQuickActionContainer:(id)arg3;
- (void)reportStoredModelsToQuickActionContainer;
- (id)schedulerProvider;
- (void)setActionDisoveryToken:(id)arg1;
- (void)setActionListModelsByActionType:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisambiguationMenuController:(id)arg1;
- (void)setDisambiguationMenuViewController:(id)arg1;
- (void)setNavigationListStyle:(id)arg1;
- (void)setupDisambiguationMenuForActionType:(id)arg1;
- (void)showDisambiguationMenuForActionType:(id)arg1;
- (void)storeDiscoveredModels:(id)arg1;
- (void)tearDownDisambiguationMenu;
- (id)userActionContext;
- (id)userActionListDataSource;

@end
