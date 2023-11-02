
@interface NTKMoonPhaseComplicationController : NTKComplicationController <CLKUITimeTravel> {
    NSTimer * _afterEventTimer;
    struct { 
        unsigned int wantsPhaseName : 1; 
        unsigned int wantsPhaseNumber : 1; 
        unsigned int wantsEventAndDate : 1; 
        unsigned int wantsLocked : 1; 
        unsigned int wantsPaused : 1; 
    }  _displayFlags;
    CLLocation * _location;
    bool  _missedUpdateWhilePaused;
    bool  _paused;
    NSDate * _timeTravelDate;
    NSString * _token;
}

@property (nonatomic, readonly) <NTKMoonPhaseComplicationDisplay> *legacyDisplay;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSString *token;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_activate;
- (void)_afterEventTimerFired:(id)arg1;
- (void)_asyncUpdateDisplay;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_invalidateEventTimer;
- (void)_scheduleAfterEventTimer:(id)arg1;
- (void)_updateDisplay;
- (void)_updateDisplayForced:(bool)arg1;
- (bool)hasTapAction;
- (id)location;
- (void)performTapActionForDisplayWrapper:(id)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setLocation:(id)arg1;
- (void)setShowsLockedUI:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setToken:(id)arg1;
- (id)token;

@end
