
@interface SBHLibraryPodCategoryIcon : SBLeafIcon <SBHLibraryCategoryObserver> {
    SBHLibraryCategory * _category;
}

@property (nonatomic, readonly) SBHLibraryCategory *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)category;
- (void)categoryDidUpdate:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (bool)isCategoryIcon;
- (long long)labelAccessoryType;

@end
