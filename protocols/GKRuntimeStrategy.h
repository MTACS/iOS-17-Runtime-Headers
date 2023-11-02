
@protocol GKRuntimeStrategy

@required

- (<GKGameSessionService> *)gameSessionService;
- (GKPlayerInternal *)localPlayer;
- (void)requestClientsRemoteImageDataForURL:(void *)arg1 queue:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (bool)shouldRefreshPreferencesAfterBackgrounding;
- (<GKUtilityService> *)utilityService;
- (<GKUtilityServicePrivate> *)utilityServicePrivate;

@end
