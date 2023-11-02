
@protocol FBSystemServiceDelegate <NSObject>

@optional

- (void)systemService:(void *)arg1 canActivateApplication:(void *)arg2 withResult:(void *)arg3; // needs 3 arg types, found 8: FBSystemService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)systemService:(void *)arg1 handleActions:(void *)arg2 origin:(void *)arg3 withResult:(void *)arg4; // needs 4 arg types, found 9: FBSystemService *, NSSet *, BSAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)systemService:(void *)arg1 handleOpenApplicationRequest:(void *)arg2 options:(void *)arg3 origin:(void *)arg4 withResult:(void *)arg5; // needs 5 arg types, found 10: FBSystemService *, NSString *, NSDictionary *, BSAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)systemService:(void *)arg1 handleOpenApplicationRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: FBSystemService *, FBSystemServiceOpenApplicationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)systemService:(void *)arg1 handleOpenURLRequest:(void *)arg2 application:(void *)arg3 options:(void *)arg4 origin:(void *)arg5 withResult:(void *)arg6; // needs 6 arg types, found 11: FBSystemService *, NSURL *, NSString *, NSDictionary *, BSAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)systemService:(void *)arg1 isPasscodeLockedOrBlockedWithResult:(void *)arg2; // needs 2 arg types, found 7: FBSystemService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)systemService:(FBSystemService *)arg1 prepareForShutdownWithOptions:(FBSShutdownOptions *)arg2 origin:(BSProcessHandle *)arg3;
- (<FBSApplicationInfoProvider> *)systemServiceApplicationInfoProvider:(FBSystemService *)arg1;
- (void)systemServicePrepareForExit:(FBSystemService *)arg1 andRelaunch:(bool)arg2;
- (void)systemServicePrepareForShutdown:(FBSystemService *)arg1 withOptions:(unsigned long long)arg2;

@end
