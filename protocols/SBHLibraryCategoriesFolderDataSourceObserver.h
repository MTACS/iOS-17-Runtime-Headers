
@protocol SBHLibraryCategoriesFolderDataSourceObserver <NSObject>

@required

- (void)categoriesDataSource:(SBHLibraryCategoriesFolderDataSource *)arg1 shouldAnimateLayoutForCategories:(NSSet *)arg2;
- (void)categoriesDataSourceNeedsAnimatedReload:(SBHLibraryCategoriesFolderDataSource *)arg1;

@end
