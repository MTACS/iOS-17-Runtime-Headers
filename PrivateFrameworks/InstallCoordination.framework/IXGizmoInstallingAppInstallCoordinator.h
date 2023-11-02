
@interface IXGizmoInstallingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithImportance, IXCoordinatorWithInstallOptions>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppAssetPromise;
@property (nonatomic, readonly) bool hasInstallOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)intent;
+ (bool)modifiesLocalLaunchServicesDatabase;

- (bool)setTargetGizmoPairingID:(id)arg1 error:(id*)arg2;
- (id)targetGizmoPairingIDWithError:(id*)arg1;
- (id)validInstallTypes;

@end
