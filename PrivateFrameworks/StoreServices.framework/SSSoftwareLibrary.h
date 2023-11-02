
@interface SSSoftwareLibrary : NSObject {
    SSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)_getItemsWithMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_sendDemotionMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)demoteApplicationWithBundleIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getLibraryItemForBundleIdentifiers:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getRemovableSytemApplicationsWithCompletionBlock:(id /* block */)arg1;
- (void)hasDemotedApplicationsWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (void)isInstalledApplicationWithBundleIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)isRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)playableApplicationsWithBundleIdentifiers:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)refreshReceiptsWithCompletionBlock:(id /* block */)arg1;
- (void)restoreAllDemotedApplicationsWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;

@end
