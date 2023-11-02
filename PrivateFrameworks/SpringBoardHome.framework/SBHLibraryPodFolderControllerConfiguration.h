
@interface SBHLibraryPodFolderControllerConfiguration : SBFolderControllerConfiguration {
    SBHLibraryCategoriesRootFolder * _categoriesFolder;
    SBHLibraryCategoryMapProvider * _categoryMapProvider;
}

@property (nonatomic, retain) SBHLibraryCategoriesRootFolder *categoriesFolder;
@property (nonatomic, retain) SBHLibraryCategoryMapProvider *categoryMapProvider;

- (void).cxx_destruct;
- (id)categoriesFolder;
- (id)categoryMapProvider;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)setCategoriesFolder:(id)arg1;
- (void)setCategoryMapProvider:(id)arg1;

@end
