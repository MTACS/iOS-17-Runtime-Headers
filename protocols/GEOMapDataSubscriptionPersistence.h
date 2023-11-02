
@protocol GEOMapDataSubscriptionPersistence <NSObject>

@required

- (void)addSubscriptionWithIdentifier:(void *)arg1 auditToken:(void *)arg2 dataTypes:(void *)arg3 policy:(void *)arg4 region:(void *)arg5 displayName:(void *)arg6 expirationDate:(void *)arg7 callbackQueue:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 15: NSString *, GEOApplicationAuditToken *, unsigned long long, long long, GEOMapRegion *, NSString *, NSDate *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOMapDataSubscription *, NSError *, void*
- (void)calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)fetchCompanionSubscriptionsWithIdentifiers:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchExpiredSubscriptionsWithIdentifiers:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchSubscriptionsForSyncToWatchWithCallbackQueue:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOPBCompanionSubscriptionsInfo *, NSError *, void*
- (void)fetchSubscriptionsWithIdentifiers:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeSubscriptionWithIdentifier:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCompanionSubscriptionInfo:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: GEOPBCompanionSubscriptionsInfo *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (GEOPBCompanionSubscriptionsInfo *)companionSubscriptionInfo;

@end
