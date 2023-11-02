
@interface PXFeedSyntheticDataSourceManager : PXSectionedDataSourceManager {
    long long  _initialNumberOfItemsPerSection;
    long long  _initialNumberOfSections;
}

- (id)createInitialDataSource;
- (id)init;
- (id)initWithNumberOfSections:(long long)arg1 numberOfItemsPerSection:(long long)arg2;

@end
