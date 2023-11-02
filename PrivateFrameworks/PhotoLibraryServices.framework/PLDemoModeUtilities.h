
@interface PLDemoModeUtilities : NSObject {
    NSString * _demoContentPhotoLibraryTemplatePath;
    NSString * _demoContentStagingBasePath;
    unsigned long long  _options;
    PLPhotoLibraryPathManager * _targetPhotoLibraryPathManager;
}

@property (nonatomic, readonly, copy) NSString *demoContentPhotoLibraryPrestagingPath;
@property (nonatomic, readonly, copy) NSString *demoContentPhotoLibraryStagingPath;
@property (nonatomic, readonly, copy) NSString *demoContentPhotoLibraryTemplatePath;
@property (nonatomic, readonly, copy) NSString *demoContentStagingBasePath;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *targetPhotoLibraryPathManager;

+ (id)newDemoModeUtilitiesWithDefaultSystemPaths;
+ (id)systemDemoContentPhotoLibraryTemplatePath;
+ (id)systemDemoContentStagingBasePath;

- (void).cxx_destruct;
- (bool)_evalSystemSafetyCheck:(id /* block */)arg1;
- (bool)cleanupForStoreDemoModeByRemovingNonDemoContentFromTargetLibrary;
- (id)demoContentPhotoLibraryPrestagingPath;
- (id)demoContentPhotoLibraryStagingPath;
- (id)demoContentPhotoLibraryTemplatePath;
- (id)demoContentStagingBasePath;
- (id)fetchDemoContentResultsInLibrary:(id)arg1;
- (id)initWithDemoContentTemplatePath:(id)arg1 stagingBasePath:(id)arg2 targetPhotoLibraryPathManager:(id)arg3 options:(unsigned long long)arg4;
- (void)kickstartStagedDemoContentInstallationByKillingAllClients;
- (long long)markAssetOriginalsInTargetPhotoLibraryAsLegacyDemoContent:(bool)arg1;
- (unsigned long long)options;
- (bool)prepareForStoreDemoModeByStagingDemoLibraryContentFromTemplate;
- (bool)replaceTargetPhotoLibraryWithStagedDemoLibraryIfExists;
- (id)targetPhotoLibraryPathManager;
- (void)warmUpDemoLibraryInstalledFromStagedTemplate;

@end
