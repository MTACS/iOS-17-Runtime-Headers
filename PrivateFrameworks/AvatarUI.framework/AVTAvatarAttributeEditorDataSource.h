
@interface AVTAvatarAttributeEditorDataSource : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal> {
    NSArray * _categories;
    unsigned long long  _currentCategoryIndex;
    AVTUIEnvironment * _environment;
    <AVTTaskScheduler> * _renderingScheduler;
    NSMutableDictionary * _sectionControllers;
    NSMutableDictionary * _sectionCoordinatorsByProvider;
}

@property (nonatomic, retain) NSArray *categories;
@property (nonatomic) unsigned long long currentCategoryIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTTaskScheduler> *renderingScheduler;
@property (nonatomic, retain) NSMutableDictionary *sectionControllers;
@property (nonatomic, retain) NSMutableDictionary *sectionCoordinatorsByProvider;
@property (readonly) Class superclass;

+ (unsigned long long)indexForCurrentCategoryGivenPreferredIdentifier:(id)arg1 categories:(id)arg2;
+ (id)sectionControllerForSection:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;

- (void).cxx_destruct;
- (id)categories;
- (id)categoryAtIndex:(long long)arg1;
- (id)currentCategoryIdentifier;
- (unsigned long long)currentCategoryIndex;
- (void)discardControllersForNonCurrentCategory;
- (id)environment;
- (id)groupPickerItemsForCategories;
- (long long)indexForSection:(id)arg1 inCategoryAtIndex:(long long)arg2;
- (id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)arg1 inCategoryAtIndex:(long long)arg2;
- (id)indexesForSectionsPresentIn:(id)arg1 butNotIn:(id)arg2;
- (id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3;
- (id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3 environment:(id)arg4;
- (long long)numberOfCategories;
- (long long)numberOfSectionsForCategoryAtIndex:(long long)arg1;
- (void)reloadWithCategories:(id)arg1 currentCategoryIndex:(unsigned long long)arg2;
- (id)renderingScheduler;
- (id)sectionControllerForSection:(id)arg1;
- (id)sectionControllerForSectionIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (id)sectionControllers;
- (id)sectionCoordinatorForSectionAtIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (id)sectionCoordinatorsByProvider;
- (id)sectionForIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (id)sectionProviderForSectionAtIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2;
- (void)setCategories:(id)arg1;
- (void)setCurrentCategoryIndex:(unsigned long long)arg1;
- (void)setSectionControllers:(id)arg1;
- (void)setSectionCoordinatorsByProvider:(id)arg1;
- (bool)shouldDisplaySectionWithDisplayCondition:(id)arg1 inCategoryAtIndex:(unsigned long long)arg2;
- (void)updateCoordinatorsFromCategory:(id)arg1 currentCoordinators:(id)arg2;

@end
