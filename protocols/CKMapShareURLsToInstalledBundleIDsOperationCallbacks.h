
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleBundleIDsFetchedForURL:(NSURL *)arg1 appBundleIDs:(NSArray *)arg2 daemonBundleIDs:(NSArray *)arg3 error:(NSError *)arg4;

@end
