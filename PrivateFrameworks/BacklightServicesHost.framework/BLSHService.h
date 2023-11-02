
@interface BLSHService : NSObject {
    BLSHAssertionService * _assertionService;
    BLSHBacklightService * _backlightService;
    BLSHDefaultsObserver * _defaultsObserver;
    <BLSHInactiveBudgetPolicing> * _inactiveBudgetPolicy;
    BLSHBacklightOSInterfaceProvider * _osInterfaceProvider;
    <BLSHServicePlatformProvider> * _platformProvider;
}

@property (nonatomic, readonly) <BLSHInactiveBudgetPolicing> *inactiveBudgetPolicy;
@property (nonatomic, readonly) BLSHLocalAssertionService *localAssertionService;
@property (nonatomic, readonly) <BLSHServicePlatformProvider> *platformProvider;

+ (void)earlyInitialization;
+ (id)sharedService;
+ (id)startLocalOnlyServiceWithConfiguration:(id)arg1;
+ (id)startServiceWithPlatformProvider:(id)arg1;
+ (id)startServiceWithPlatformProvider:(id)arg1 localOnly:(bool)arg2;

- (void).cxx_destruct;
- (void)beginSpecialManagementForHostEnvironment:(id)arg1;
- (void)deregisterSceneWorkspace:(id)arg1;
- (id)inactiveBudgetPolicy;
- (id)initWithPlatformProvider:(id)arg1 localOnly:(bool)arg2;
- (id)localAssertionService;
- (id)platformProvider;
- (void)registerSceneWorkspace:(id)arg1;

@end
