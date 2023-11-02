
@interface ATXWidgetsAndFoldersConfigurationProvider : NSObject {
    ATXHomeScreenConfigCache * _cache;
    NSArray * _homePageFolders;
    NSArray * _pages;
}

- (void).cxx_destruct;
- (void)cacheHomeScreenConfigurationsIfNecessary;
- (unsigned long long)globalAllPagesFolderCount;
- (unsigned long long)globalAllPagesWidgetCount;
- (unsigned long long)homePageFolderCountBucket;
- (unsigned long long)homePageWidgetCountBucket;
- (id)init;

@end
