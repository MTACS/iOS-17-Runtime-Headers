
@interface NPKUWBSecureRangingCoordinator : NSObject

+ (id)sharedInstance;

- (void)_handleCarKeyRangingDidResumeNotification:(id)arg1;
- (void)_handleCarKeyRangingDidSuspendNotification:(id)arg1;
- (void)_parseNearFieldNotificationObject:(id)arg1 outApplicationIdentifier:(id*)arg2 outApplicationKeyIdentifier:(id*)arg3;
- (id)init;
- (id)pauseRangingForPass:(id)arg1 durationInSeconds:(id)arg2;
- (id)resumeRangingForPass:(id)arg1;

@end
