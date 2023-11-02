
@interface NCSupplementaryViewPrototypeRecipe : NSObject <NCSupplementaryViewPrototypeRecipeViewControllerDelegate> {
    <NCSupplementaryViewPrototypeRecipeDelegate> * _delegate;
    NSMutableDictionary * _lastModifiedDatesByGroupingIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCSupplementaryViewPrototypeRecipeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *lastModifiedDatesByGroupingIdentifiers;
@property (readonly) Class superclass;

+ (id)_sharedInstance;
+ (void)registerRecipeWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (long long)_compareByAgeForViewController:(id)arg1 otherViewController:(id)arg2;
- (id)_mostRecentDateForGroupingIdentifier:(id)arg1;
- (void)_presentSupplementaryViewController;
- (void)_registerRecipeWithDelegate:(id)arg1;
- (void)_setSortComparatorsForContainer:(id)arg1;
- (id)_supplementaryViewsTestRecipeWithDelegate:(id)arg1;
- (void)_updateGroupLastModifiedDateForViewController:(id)arg1;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)lastModifiedDatesByGroupingIdentifiers;
- (unsigned long long)prototypeRecipeViewController:(id)arg1 requestsCountForGroupWithIdentifier:(id)arg2;
- (void)recipeMenuViewController:(id)arg1 requestsInsertContentViewController:(id)arg2;
- (void)requestsInsertForPrototypeRecipeViewController:(id)arg1;
- (void)requestsRemovalForPrototypeRecipeViewController:(id)arg1;
- (void)requestsUpdateForPrototypeRecipeViewController:(id)arg1;
- (void)requestsUpdatePositionIfNeededForPrototypeRecipeViewController:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastModifiedDatesByGroupingIdentifiers:(id)arg1;

@end
