
@interface SBHLibraryCategoriesFolderDataSource : NSObject <SBIconObserver> {
    SBHLibraryCategoriesRootFolder * _categoriesFolder;
    SBHLibraryCategoryMap * _categoryMap;
    SBHIconModel * _iconModel;
    NSSet * _mappedIcons;
    long long  _maximumNumberOfDisplayedCategories;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) SBHLibraryCategoriesRootFolder *categoriesFolder;
@property (nonatomic, readonly) NSArray *categoryIdentifiers;
@property (nonatomic, readonly) unsigned long long categoryIdentifiersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteDidAddIcon:(id)arg1;
- (void)_noteDidReloadIcons:(id)arg1;
- (void)_noteDidReplaceIcon:(id)arg1;
- (void)_noteIconVisibilityDidChange:(id)arg1;
- (void)_noteWillLayoutIconState:(id)arg1;
- (void)_noteWillRemoveIcon:(id)arg1;
- (void)_regenerateCategoriesFolder;
- (void)addObserver:(id)arg1;
- (id)categoriesFolder;
- (id)categoryForIdentifier:(id)arg1;
- (id)categoryIdentifiers;
- (unsigned long long)categoryIdentifiersCount;
- (bool)containsIcon:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)iconModel;
- (id)init;
- (id)initWithCategoriesFolder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataSource:(id)arg1;
- (long long)maximumNumberOfDisplayedCategories;
- (id)reloadData;
- (id)reloadDataSourceUsingIcons:(id)arg1 categoryMap:(id)arg2;
- (id)reloadDataWithCategoryMap:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setMaximumNumberOfDisplayedCategories:(long long)arg1;

@end
