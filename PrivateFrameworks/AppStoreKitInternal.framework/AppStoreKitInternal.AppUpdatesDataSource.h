
@interface AppStoreKitInternal.AppUpdatesDataSource : NSObject <ASDAppQueryResultsObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastServerReloadTime;
    void listeners;
    void objectGraph;
    void updatesQuery;
}

- (void).cxx_destruct;
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;
- (id)init;

@end
