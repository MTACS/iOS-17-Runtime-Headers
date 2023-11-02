
@interface CLKClockTimer : NSObject {
    NSHashTable * _allHandlers;
    bool  _backlightOn;
    NSCalendar * _calendar;
    CADisplayLink * _displayLink;
    NSHashTable * _handlersByUpdateFrequency;
    NSString * _identifier;
    bool  _ignoreScreenState;
    bool  _isForeground;
    long long  _last15fps;
    long long  _last30fps;
    long long  _last60fps;
    long long  _lastHour;
    long long  _lastMinute;
    NSDate * _lastNow;
    long long  _lastSecond;
    unsigned long long  _nextToken;
    bool  _paused;
    bool  _permittedToRun;
    NSObject<OS_dispatch_source> * _waitForNextEventTimer;
    NSDate * _waitTimerScheduledFireTime;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool ignoreScreenState;

+ (id)now;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelWaitTimer;
- (void)_createDisplayLinkIfNeeded;
- (void)_handleTimePassed;
- (bool)_hasHandlers;
- (void)_maybeClearLastSeenTimeComponents;
- (long long)_minimumPossibleUpdateFrequency;
- (id)_nextTokenWithUpdateFrequency:(long long)arg1 wantsCommit:(bool)arg2 wantsHighAccuracy:(bool)arg3 identificationLog:(id /* block */)arg4 handler:(id /* block */)arg5;
- (void)_onDisplayLink:(id)arg1;
- (void)_setDisplayLinkFrameInterval:(long long)arg1;
- (double)_timeUntilNextHighAccuracyEventFromHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3 nanosecond:(long long)arg4;
- (double)_timeUntilNextHighAccuracyEventFromNow;
- (void)_updateDisplayLink;
- (void)_updateDisplayLinkWithTimeUntilNextHighAccuracyEvent:(double)arg1 withMinimumUpdateFrequency:(long long)arg2;
- (void)_updateIsPermittedToRun;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (bool)ignoreScreenState;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)pause;
- (void)setHandler:(id)arg1 wantsCommit:(bool)arg2;
- (void)setIgnoreScreenState:(bool)arg1;
- (id)start15fpsUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (id)start30fpsUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (id)start60fpsUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (id)startMinuteUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (id)startSecondUpdatesWithHandler:(id /* block */)arg1 identificationLog:(id /* block */)arg2;
- (id)startUpdatesWithUpdateFrequency:(long long)arg1 withHandler:(id /* block */)arg2 identificationLog:(id /* block */)arg3;
- (void)stopUpdatesForToken:(id)arg1;
- (void)unpause;

@end
