
@interface HDWorkoutPluginDaemonExtension : NSObject <HDHealthDaemonExtension> {
    HDAlertSuppressor * _alertSuppressor;
    HDAppLauncher * _appLauncher;
    HDBackgroundWorkoutRunner * _backgroundWorkoutRunner;
    HDCarouselServicesManager * _carouselServicesManager;
    HDCoreMotionWorkoutInterface * _coreMotionWorkoutInterface;
    HDDaemon * _daemon;
    HDHeartRateRecoveryManager * _heartRateRecoveryManager;
}

@property (nonatomic, readonly) HDAlertSuppressor *alertSuppressor;
@property (nonatomic, readonly) HDAppLauncher *appLauncher;
@property (nonatomic, readonly) HDBackgroundWorkoutRunner *backgroundWorkoutRunner;
@property (nonatomic, readonly) HDCarouselServicesManager *carouselServicesManager;
@property (nonatomic, readonly) HDCoreMotionWorkoutInterface *coreMotionWorkoutInterface;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDHeartRateRecoveryManager *heartRateRecoveryManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertSuppressor;
- (id)appLauncher;
- (id)backgroundWorkoutRunner;
- (id)carouselServicesManager;
- (id)coreMotionWorkoutInterface;
- (id)daemon;
- (id)heartRateRecoveryManager;
- (id)initWithDaemon:(id)arg1;

@end
