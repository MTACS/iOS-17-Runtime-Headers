
@interface CNContactActionsController : NSObject <CNAvatarCardActionListController, CNUINavigationListViewControllerDelegate, CNUIUserActionListConsumer> {
    NSArray * _actionTypes;
    <CNUIUserActionListDataSource> * _actionsDataSource;
    long long  _actionsOrder;
    CNContact * _contact;
    <CNContactActionsControllerDelegate> * _delegate;
    bool  _displayMenuIconAtTopLevel;
    bool  _generateFaceTimeListItemsOnly;
    bool  _generateFavoritesListItemsOnly;
    NSArray * _modelCancelables;
    NSDictionary * _modelsByActionTypes;
    <CNUINavigationListStyle> * _navigationListStyle;
    bool  _shouldUseOutlinedActionGlyphStyle;
    UIViewController * _viewController;
}

@property (nonatomic, readonly, copy) NSArray *actionTypes;
@property (nonatomic, retain) <CNUIUserActionListDataSource> *actionsDataSource;
@property (nonatomic) long long actionsOrder;
@property (nonatomic) bool actionsReversed;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayMenuIconAtTopLevel;
@property (nonatomic) bool generateFaceTimeListItemsOnly;
@property (nonatomic) bool generateFavoritesListItemsOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *modelCancelables;
@property (nonatomic, copy) NSDictionary *modelsByActionTypes;
@property (nonatomic) <CNUINavigationListStyle> *navigationListStyle;
@property (nonatomic) bool shouldUseOutlinedActionGlyphStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)descriptorForRequiredKeys;
+ (id)supportedActionTypes;

- (void).cxx_destruct;
- (id)actionForItem:(id)arg1 withImage:(id)arg2;
- (id)actionTypes;
- (id)actionsDataSource;
- (long long)actionsOrder;
- (bool)actionsReversed;
- (void)cancelModels;
- (id)contact;
- (void)dealloc;
- (id)delegate;
- (bool)displayMenuIconAtTopLevel;
- (id)displayedController;
- (bool)generateFaceTimeListItemsOnly;
- (bool)generateFavoritesListItemsOnly;
- (void)generateMenuForItem:(id)arg1 image:(id)arg2 withCurrentList:(id)arg3;
- (id)imageForActionType:(id)arg1;
- (id)initWithContact:(id)arg1 actionTypes:(id)arg2;
- (id)initWithContact:(id)arg1 dataSource:(id)arg2 actionTypes:(id)arg3;
- (id)modelCancelables;
- (id)modelForActionType:(id)arg1;
- (id)modelsByActionTypes;
- (void)navigationListController:(id)arg1 didSelectItem:(id)arg2;
- (id)navigationListItemForUserActionType:(id)arg1;
- (id)navigationListStyle;
- (void)prepareNavigationListItems;
- (void)retrieveModels;
- (void)setActionsDataSource:(id)arg1;
- (void)setActionsOrder:(long long)arg1;
- (void)setActionsReversed:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMenuIconAtTopLevel:(bool)arg1;
- (void)setGenerateFaceTimeListItemsOnly:(bool)arg1;
- (void)setGenerateFavoritesListItemsOnly:(bool)arg1;
- (void)setModelCancelables:(id)arg1;
- (void)setModelsByActionTypes:(id)arg1;
- (void)setNavigationListStyle:(id)arg1;
- (void)setShouldUseOutlinedActionGlyphStyle:(bool)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldUseOutlinedActionGlyphStyle;
- (void)styleUpdated;
- (id)viewController;

@end
