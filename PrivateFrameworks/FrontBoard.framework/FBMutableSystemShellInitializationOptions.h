
@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (nonatomic, copy) NSString *independentWatchdogPortName;
@property (nonatomic) bool initializeDisplayManager;
@property (nonatomic) bool initializeReadyForInteraction;
@property (nonatomic, copy) id /* block */ registerAdditionalServicesBlock;
@property (nonatomic) bool resetDarkBootState;
@property (nonatomic) bool shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIndependentWatchdogPortName:(id)arg1;
- (void)setInitializeDisplayManager:(bool)arg1;
- (void)setInitializeReadyForInteraction:(bool)arg1;
- (void)setRegisterAdditionalServicesBlock:(id /* block */)arg1;
- (void)setResetDarkBootState:(bool)arg1;
- (void)setShouldWaitForMigrator:(bool)arg1;
- (void)setSystemSleepInterval:(double)arg1;

@end
