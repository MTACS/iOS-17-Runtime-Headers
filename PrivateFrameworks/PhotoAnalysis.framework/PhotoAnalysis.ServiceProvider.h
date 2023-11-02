
@interface PhotoAnalysis.ServiceProvider : _TtCs12_SwiftObject <PLPhotoAnalysisServiceProviderProtocol> {
    void client;
    void clientBundleID;
    void clientDescription;
    void connection;
    void executive;
    void identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void serviceCreationTaskByDescription;
    void stateHolder;
}

- (void)executiveServiceAt:(id)arg1 reply:(id /* block */)arg2;
- (void)legacyStorytellingServiceAt:(id)arg1 reply:(id /* block */)arg2;
- (void)momentGraphServiceAt:(id)arg1 reply:(id /* block */)arg2;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (void)photoLibraryServiceAt:(id)arg1 reply:(id /* block */)arg2;
- (void)testServiceAt:(id)arg1 reply:(id /* block */)arg2;
- (void)wallpaperServiceAt:(id)arg1 reply:(id /* block */)arg2;

@end
