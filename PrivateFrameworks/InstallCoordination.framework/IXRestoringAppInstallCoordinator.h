
@interface IXRestoringAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithRemovabilityState, IXCoordinatorWithUserDataPromise>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppAssetPromise;
@property (nonatomic, readonly) bool hasInstallOptions;
@property (nonatomic, readonly) bool hasUserDataPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
