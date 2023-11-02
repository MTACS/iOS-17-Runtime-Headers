
@interface _UISunScheduleController : NSObject {
    GEOAlmanac * _almanac;
    bool  _hasTimeZoneLocation;
    bool  _inScheduleTime;
    NSTimer * _nextEventTimer;
    NSMapTable * _observers;
    double  _sunriseAbsolute;
    double  _sunsetAbsolute;
    struct { 
        double latitude; 
        double longitude; 
    }  _timeZoneLocation;
}

@property (getter=isInScheduleTime, nonatomic, readonly) bool inScheduleTime;

- (void).cxx_destruct;
- (void)_invalidateNextEventTimer;
- (void)_notifyChange;
- (void)_setNextEventTimerToAbsoluteTime:(double)arg1;
- (void)_significantTimeChange;
- (void)_timeZoneChange;
- (void)_updateGeoCity;
- (void)_updateInScheduleTime:(bool)arg1;
- (void)_updateStatus;
- (void)_updateStatusWithAbsoluteTime:(double)arg1;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)arg1;
- (void)addObserver:(id)arg1 changeHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)forceUpdate;
- (id)init;
- (bool)isInScheduleTime;
- (id)nextTransition:(bool)arg1;
- (void)removeObserver:(id)arg1;

@end
