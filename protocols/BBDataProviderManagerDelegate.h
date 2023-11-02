
@protocol BBDataProviderManagerDelegate <NSObject>

@required

- (void)dpManager:(BBDataProviderManager *)arg1 addDataProvider:(BBDataProvider *)arg2 withSectionInfo:(BBSectionInfo *)arg3;
- (void)dpManager:(BBDataProviderManager *)arg1 addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
- (void)dpManager:(BBDataProviderManager *)arg1 removeDataProviderSectionID:(NSString *)arg2;
- (BBSectionInfo *)dpManager:(BBDataProviderManager *)arg1 sectionInfoForSectionID:(NSString *)arg2;

@end
