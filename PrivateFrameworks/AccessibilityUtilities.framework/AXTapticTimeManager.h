
@interface AXTapticTimeManager : NSObject {
    NSObject<OS_os_activity> * _activity;
    unsigned int  _assertionID;
    NSNumber * _cachedSpeed;
    long long  _currentSsid;
    NSDate * _dateOverride;
    NSMutableArray * _enqueuedSoundDelays;
    NSMutableArray * _enqueuedSounds;
    NSMutableDictionary * _hapticsDescriptions;
    bool  _is24Hour;
    bool  _isCurrentlyOutputting;
    NSLocale * _localeOverride;
    NSHashTable * _observers;
    struct os_activity_scope_state_s { 
        unsigned long long opaque[2]; 
    }  _scopeState;
    NSMutableDictionary * _soundToPatterns;
    unsigned int  _ssIDHapticFast;
    unsigned int  _ssIDHapticMorse;
    unsigned int  _ssIDHapticSlow;
    id /* block */  _testingQueueCallback;
}

@property (nonatomic) unsigned int assertionID;
@property (nonatomic, retain) NSDate *dateOverride;
@property (nonatomic, readonly) bool isCurrentlyOutputting;
@property (nonatomic, retain) NSLocale *localeOverride;
@property (nonatomic, copy) id /* block */ testingQueueCallback;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_atomToLegacyVibePattern:(id)arg1;
- (void)_cleanupHapticsDict;
- (void)_clearQueue;
- (id)_convertSoundToStringName:(unsigned int)arg1;
- (id)_dateComponentsForClockTime;
- (void)_dequeueSound;
- (void)_enqueueHours:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_enqueueMinutes:(unsigned long long)arg1 encoding:(long long)arg2;
- (void)_handleTestingQueueCallback;
- (void)_informObserversDidOutputSSID:(long long)arg1;
- (void)_informObserversDidStart;
- (void)_informObserversDidStop;
- (void)_informObserversWillOutputSSID:(long long)arg1 hapticsDescriptions:(id)arg2;
- (bool)_is24HourTime;
- (void)_localeDidChange:(id)arg1;
- (long long)_numberOfTapHoursForClockTimeWithEncoding:(long long)arg1;
- (long long)_numberOfTapMinutesForClockTime;
- (long long)_numberOfTapsForHourNumber:(long long)arg1 withEncoding:(long long)arg2;
- (void)_outputWithEnqueueBlock:(id /* block */)arg1;
- (bool)_preStartCheck;
- (bool)_startPowerAssertion;
- (void)_stopPowerAssertion;
- (void)_updateHapticPatternsIfNecessary:(bool)arg1;
- (void)_updateIs24HourTime;
- (void)addObserver:(id)arg1;
- (unsigned int)assertionID;
- (id)dateOverride;
- (void)dealloc;
- (id)init;
- (bool)isCurrentlyOutputting;
- (id)localeOverride;
- (void)outputHours:(long long)arg1;
- (void)outputHoursAndMinutes:(long long)arg1;
- (void)outputMinutes:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)setAssertionID:(unsigned int)arg1;
- (void)setDateOverride:(id)arg1;
- (void)setLocaleOverride:(id)arg1;
- (void)setTestingQueueCallback:(id /* block */)arg1;
- (void)stopCurrentOutput;
- (id /* block */)testingQueueCallback;

@end
