
@protocol DSTCCStore <NSObject>

@required

- (void)allAppsWithLocalNetworkAccess:(void *)arg1 queue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (NSDictionary *)appsWithLocationService;
- (void)appsWithPermissionGrantedForService:(void *)arg1 queue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (NSError *)deleteApp:(NSString *)arg1 forTest:(bool)arg2;
- (void)healthAuthorizationForApp:(void *)arg1 andAuthorizationStore:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, HKAuthorizationStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)isEntityClassApplication:(NSDictionary *)arg1;
- (bool)isServiceGranted:(NSString *)arg1 forApp:(NSString *)arg2;
- (unsigned long long)locationAuthorizationForApp:(NSDictionary *)arg1;
- (void)resetHealthPermissionsForApp:(void *)arg1 withAuthorizationStore:(void *)arg2 andCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, HKAuthorizationStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetLocalNetworkPermissionForApp:(void *)arg1 queue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resetLocationPermissionForApp:(NSString *)arg1;
- (NSArray *)resetTCCPermission:(NSString *)arg1 forApp:(NSString *)arg2;
- (void)saveConfiguration:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
