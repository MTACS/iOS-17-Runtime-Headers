
@interface SBHLibraryCategory : NSObject <NSFastEnumeration, SBIconObserver, SBLeafIconDataSource> {
    SBHLibraryAdditionalItemsIndicatorIcon * _additionalItemsIndicatorIcon;
    long long  _aggregrateIconLabelAccessoryType;
    SBHLibraryCategoryIdentifier * _categoryIdentifier;
    SBHLibraryCategoryFolder * _compactPodAdditionalItemsFolder;
    SBHLibraryCategoryFolder * _compactPodFolder;
    SBHLibraryCategoryFolder * _expandedPodFolder;
    <SBIconDelegate> * _iconDelegate;
    NSArray * _icons;
    NSHashTable * _observers;
    long long  _overflowBehavior;
}

@property (nonatomic, readonly) SBHLibraryAdditionalItemsIndicatorIcon *additionalItemsIndicatorIcon;
@property (nonatomic, copy) SBHLibraryCategoryIdentifier *categoryIdentifier;
@property (nonatomic, readonly, copy) SBHLibraryCategoryFolder *compactPodAdditionalItemsFolder;
@property (nonatomic, readonly, copy) SBHLibraryCategoryFolder *compactPodFolder;
@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SBHLibraryCategoryFolder *expandedPodFolder;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBIconDelegate> *iconDelegate;
@property (nonatomic, readonly, copy) NSArray *icons;
@property (nonatomic, readonly, copy) NSString *leafIdentifier;
@property (nonatomic) long long overflowBehavior;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_buildDisplayedIconsForFolder:(id)arg1 icons:(id)arg2;
- (void)_localizedDisplayNameChangedTo:(id)arg1;
- (void)_noteCategoryDidUpdate;
- (void)_noteCategoryWillUpdate;
- (void)_noteFolderDidUpdateIcons:(id)arg1;
- (void)_noteFolderWillUpdateIcons:(id)arg1;
- (void)_refreshAggregateIconLabelAccessoryType;
- (void)addObserver:(id)arg1;
- (id)additionalItemsIndicatorIcon;
- (id)categoryIdentifier;
- (id)compactPodAdditionalItemsFolder;
- (id)compactPodFolder;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)expandedPodFolder;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)iconDelegate;
- (bool)iconSupportsUninstall:(id)arg1;
- (id)icons;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategory:(id)arg1;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (id)leafIdentifier;
- (long long)overflowBehavior;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setIconDelegate:(id)arg1;
- (void)setOverflowBehavior:(long long)arg1;
- (id)uniqueIdentifier;
- (bool)updateCategoryIdentifier:(id)arg1;
- (bool)updateCategoryWithIcons:(id)arg1;

@end
