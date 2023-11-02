
@interface CAMLibrarySelectionSession : NSObject {
    bool  _canResetToDefaultMode;
    long long  _currentMode;
    <CAMLibrarySelectionDelegate> * _delegate;
    long long  _initialMode;
    NSDate * _launchDate;
    bool  _overriddenByUser;
    bool  _restoredFromPreferences;
    double  _timeForSmartSharingAutoDecision;
    double  _timeForUserManualOverride;
    double  _timeToAcquireFirstLocation;
    double  _timeToAcquireFirstPreciseLocation;
    double  _timeToDetectDevicesInProximity;
    long long  _userInteractionsCount;
    bool  _userWasPreviouslyOnTrip;
}

@property (nonatomic, readonly) bool canResetToDefaultMode;
@property (nonatomic, readonly) long long currentMode;
@property (nonatomic) <CAMLibrarySelectionDelegate> *delegate;
@property (nonatomic, readonly) long long initialMode;
@property (nonatomic, retain) NSDate *launchDate;
@property (nonatomic, readonly) bool overriddenByUser;
@property (nonatomic, readonly) bool restoredFromPreferences;
@property (nonatomic, readonly) double timeForSmartSharingAutoDecision;
@property (nonatomic, readonly) double timeForUserManualOverride;
@property (nonatomic, readonly) double timeToAcquireFirstLocation;
@property (nonatomic, readonly) double timeToAcquireFirstPreciseLocation;
@property (nonatomic, readonly) double timeToDetectDevicesInProximity;
@property (nonatomic, readonly) long long userInteractionsCount;
@property (nonatomic, readonly) bool userWasPreviouslyOnTrip;

- (void).cxx_destruct;
- (bool)_applyAutoResetModeAndNotify:(bool)arg1;
- (long long)_autoResetMode;
- (bool)_canResetDuringSessionWithResult:(id)arg1;
- (bool)_canTransitionToAutoOn;
- (long long)_defaultMode;
- (bool)_shouldResetDuringSessionWithResult:(id)arg1;
- (bool)_shouldResetSessionBasedOnTimeoutDuringTrip:(bool)arg1 atSameLocation:(bool)arg2;
- (bool)_userWasPreviouslyOnTrip;
- (bool)canResetToDefaultMode;
- (long long)currentMode;
- (id)delegate;
- (id)initWithMode:(long long)arg1;
- (long long)initialMode;
- (id)launchDate;
- (bool)notifyResetIfNeeded;
- (bool)overriddenByUser;
- (bool)restoredFromPreferences;
- (void)setDelegate:(id)arg1;
- (void)setLaunchDate:(id)arg1;
- (double)timeForSmartSharingAutoDecision;
- (double)timeForUserManualOverride;
- (double)timeToAcquireFirstLocation;
- (double)timeToAcquireFirstPreciseLocation;
- (double)timeToDetectDevicesInProximity;
- (bool)updateWithMode:(long long)arg1;
- (bool)updateWithResult:(id)arg1;
- (long long)userInteractionsCount;
- (bool)userWasPreviouslyOnTrip;

@end
