
@interface EDMailDynamicDataAsset : NSObject <EFLoggable> {
    NSSet * _ignoredDomains;
    EDAssetDownloadScheduler * _scheduler;
    bool  _shouldIgnoreUserAccountDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSSet *ignoredDomains;
@property (nonatomic, retain) EDAssetDownloadScheduler *scheduler;
@property bool shouldIgnoreUserAccountDomains;
@property (readonly) Class superclass;

+ (id)_ignoredDomainsFallback;
+ (id)log;

- (void).cxx_destruct;
- (void)_downloadAssetCatalogWithCompletion:(id /* block */)arg1;
- (void)_queryForAssetWithCompletion:(id /* block */)arg1;
- (void)_updateIgnoredDomains:(id)arg1;
- (void)_updateStateFromAsset:(id)arg1;
- (id)ignoredDomains;
- (id)init;
- (id)scheduler;
- (void)setIgnoredDomains:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setShouldIgnoreUserAccountDomains:(bool)arg1;
- (bool)shouldIgnoreDomain:(id)arg1;
- (bool)shouldIgnoreUserAccountDomains;

@end
