
@interface CalFoundationPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) double defaultEventDuration;
@property (nonatomic) double simulatedDateForNowOffset;
@property (nonatomic, retain) NSString *stopTimeDemoMode;
@property (nonatomic, readonly) bool stopTimeDemoModeActive;
@property (nonatomic, readonly) NSDateComponents *stopTimeDemoModeComponents;

+ (id)shared;

- (void).cxx_destruct;
- (double)defaultEventDuration;
- (id)init;
- (id)initWithPreferencesForUnitTesting:(id)arg1;
- (void)setDefaultEventDuration:(double)arg1;
- (void)setSimulatedDateForNowOffset:(double)arg1;
- (void)setStopTimeDemoMode:(id)arg1;
- (double)simulatedDateForNowOffset;
- (id)stopTimeDemoMode;
- (bool)stopTimeDemoModeActive;
- (id)stopTimeDemoModeComponents;

@end
