
@interface DTApplicationListingService : DTXService <DTApplicationListingServiceRequests, DTApplicationWorkspaceClient>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void)_sendNotification:(id)arg1 install:(bool)arg2;
- (void)applicationInstalled:(id)arg1;
- (void)applicationUninstalled:(id)arg1;
- (id)installedApplicationsMatching:(id)arg1 registerUpdateToken:(id)arg2;
- (void)unregisterUpdateToken:(id)arg1;

@end
