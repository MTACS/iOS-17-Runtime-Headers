
@interface AppStoreKitInternal.DeviceAppStateDataSource : NSObject <ASDAppQueryResultsObserver> {
    void accessQueue;
    void adamIdsByBundleId;
    void appQuery;
    void availableUpdatesCache;
    void betaAppBundleVersions;
    void delegate;
    void expectedAppStates;
    void greenTeaLogger;
    void isBetaAppsDataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void previouslyInstalledLibraryItems;
    void store;
}

- (void).cxx_destruct;
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;
- (void)dealloc;
- (void)didReceiveUpdateFromProductPage:(id)arg1;
- (id)init;

@end
