
@protocol VUIOpenURLHandling

@required

- (NSURL *)deferredOpenURL;
- (void)handleDeferredURLWithAppContext:(VUIAppContext *)arg1;
- (bool)isFinished;
- (bool)isLoadingSharedWatchURL;
- (bool)isRedeemURL:(NSURL *)arg1;
- (void)openSharedWatchURL:(void *)arg1 appContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, VUIAppContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)openedByDeeplink;
- (void)parseURL:(void *)arg1 appContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, VUIAppContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VUIDocumentDataSource *, void*
- (void)processDeeplink:(void *)arg1 appContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSURL *, VUIAppContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSString *, bool, void*
- (void)processEngagementResult:(AMSEngagementResult *)arg1 error:(NSError *)arg2;
- (void)processEntityWithContextData:(NSDictionary *)arg1 appContext:(VUIAppContext *)arg2;
- (void)processNonDeeplinkURL:(void *)arg1 contextData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)processRouterDeeplink:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: VUIOpenURLRouterDataSource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSString *)queryParameterStringfromURL:(NSURL *)arg1 parameter:(NSString *)arg2;
- (void)saveDeferredURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSString *, bool, void*
- (void)setIsFinished:(bool)arg1;
- (void)setOpenedByDeeplink:(bool)arg1;

@end
