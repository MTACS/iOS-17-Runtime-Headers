
@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id /* block */)arg1;
- (void)requestDashboardLogoImageWithHandler:(id /* block */)arg1;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* block */)arg1;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(id /* block */)arg2;

@end
