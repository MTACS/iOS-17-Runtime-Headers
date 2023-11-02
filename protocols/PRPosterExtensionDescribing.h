
@protocol PRPosterExtensionDescribing <PRSPosterExtensionDescribing>

@required

- (void)clearUpdatingServiceForReason:(NSString *)arg1;
- (void)pr_addRefreshConfigurationOperation:(NSOperation *)arg1 waitUntilFinished:(bool)arg2;
- (void)pr_addReloadDescriptorOperation:(NSOperation *)arg1;
- (PRUpdatingService *)pr_assetUpdaterWithError:(id*)arg1;
- (NSArray *)pr_refreshConfigurationOperations;
- (NSArray *)pr_reloadDescriptorOperations;
- (NSSet *)pr_supportedRoles;

@end
