
@interface ATXAppLaunchMicroLocationGuardedData : NSObject {
    NSDictionary * _currentMicroLocation;
    NSDate * _currentMicroLocationDate;
    ATXLocationToLaunchCorrelation * _locationToActionKeyCorrelation;
    ATXLocationToLaunchCorrelation * _locationToAppLaunchCorrelation;
    id  _waitForUnlockNotificationToken;
}

- (void).cxx_destruct;
- (id)getCurrentMicroLocation;
- (id)initWithCurrentMicroLocation:(id)arg1;
- (bool)microLocationExpired:(id)arg1;
- (void)setCurrentMicroLocation:(id)arg1;

@end
