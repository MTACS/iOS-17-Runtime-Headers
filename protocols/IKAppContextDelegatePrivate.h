
@protocol IKAppContextDelegatePrivate <IKAppContextDelegate>

@optional

- (void)appContext:(void *)arg1 openDynamicUIURL:(void *)arg2 metricsOverlay:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: IKAppContext *, NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IKAppDynamicUIResult *, NSError *, void*
- (void)appContext:(void *)arg1 openMarketingItem:(void *)arg2 metricsOverlay:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: IKAppContext *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IKAppDynamicUIResult *, NSError *, void*
- (void)appContext:(void *)arg1 scriptForURL:(void *)arg2 cachePolicy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: IKAppContext *, NSURL *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, unsigned long long, void*

@end
