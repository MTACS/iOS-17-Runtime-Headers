
@protocol PXSearchDataSourceSectionProviderChangeObserver <NSObject>

@required

- (void)searchDataSourceSectionProviderDidChange:(id <PXSearchDataSourceSectionProvider>)arg1 animateChanges:(bool)arg2;
- (void)searchDataSourceSectionProviderDidChange:(id <PXSearchDataSourceSectionProvider>)arg1 reloadItemIdentifiers:(NSArray *)arg2 animateChanges:(bool)arg3;

@end
