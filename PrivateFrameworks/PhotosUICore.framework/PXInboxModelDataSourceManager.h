
@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager <PXInboxModelDataSourceManagerBase>

@property (nonatomic, readonly) PXSectionedDataSource<PXInboxModelDataSourceBase> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXInboxProviderSource> *providerSource;
@property (readonly) Class superclass;

- (id)providerSource;

@end
