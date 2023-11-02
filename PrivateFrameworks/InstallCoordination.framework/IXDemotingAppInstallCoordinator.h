
@interface IXDemotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithImportance, IXCoordinatorWithInstallOptions>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasInstallOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
