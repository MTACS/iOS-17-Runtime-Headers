
@interface SBHLibraryMutableCategoryMap : SBHLibraryCategoryMap

@property (nonatomic, copy) NSArray *categoryIdentifiers;
@property (nonatomic, copy) NSDictionary *metadata;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (void)addApplicationIdentifier:(id)arg1 forCategoryIdentifier:(id)arg2;
- (void)addCategoryIdentifier:(id)arg1;
- (void)removeCategoryIdentifier:(id)arg1;
- (void)setLocalizedCategoryName:(id)arg1 forCategoryIdentifier:(id)arg2;
- (void)setSortedApplicationIdentifiers:(id)arg1 forCategoryIdentifier:(id)arg2;
- (void)sortApplicationIdentifiersForCategoryIdentifier:(id)arg1 descriptors:(id)arg2;
- (void)updateRecentlyAddedCategoryFromMap:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_categoryIdentifierForAppDirectoryCategoryID:(unsigned long long)arg1;
- (bool)sb_hasAppsPopulatedForCategoriesOtherThanProactive;
- (void)sb_removeCategoryWithIdentifier:(unsigned long long)arg1;
- (void)sb_stripCategoriesThatArentFromProactive;

@end
