
@interface NTKOlympusController : NSObject {
    CLKClockTimerToken * _clockTimerToken;
    NSDate * _date;
    NTKFaceView * _faceView;
    unsigned long long  _hour;
    unsigned long long  _minute;
    NTKOlympusTimeView * _olympusView;
    unsigned long long  _second;
}

@property (nonatomic, retain) CLKClockTimerToken *clockTimerToken;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) NTKFaceView *faceView;
@property (nonatomic) unsigned long long hour;
@property (nonatomic) unsigned long long minute;
@property (nonatomic) NTKOlympusTimeView *olympusView;
@property (nonatomic) unsigned long long second;

- (void).cxx_destruct;
- (void)_animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3;
- (void)_applyWindrunnerMask;
- (void)_handleSignificantTimeChanged;
- (bool)_hasWindrunnerWedge;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_updateHourComponentsWithDate:(id)arg1;
- (void)_updateTimeComponentsWithDate:(id)arg1 hour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4;
- (void)applyDataMode:(long long)arg1;
- (id)clockTimerToken;
- (id)date;
- (void)dealloc;
- (id)faceView;
- (unsigned long long)hour;
- (id)initWithFaceView:(id)arg1 olympusView:(id)arg2;
- (unsigned long long)minute;
- (id)olympusView;
- (unsigned long long)second;
- (void)setClockTimerToken:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setHour:(unsigned long long)arg1;
- (void)setMinute:(unsigned long long)arg1;
- (void)setOlympusView:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setSecond:(unsigned long long)arg1;

@end
