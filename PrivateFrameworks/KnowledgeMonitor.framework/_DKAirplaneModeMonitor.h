
@interface _DKAirplaneModeMonitor : _DKMonitor {
    NSNumber * _airplaneModeStatus;
    struct __SCPreferences { } * _radioPrefs;
    BMSource * _source;
}

@property (nonatomic, retain) NSNumber *airplaneModeStatus;
@property struct __SCPreferences { }*radioPrefs;

+ (id)_BMEventWithState:(bool)arg1;
+ (id)_eventWithState:(bool)arg1;
+ (id)eventStream;

- (void).cxx_destruct;
- (id)airplaneModeStatus;
- (void)deactivate;
- (void)dealloc;
- (struct __SCPreferences { }*)radioPrefs;
- (void)setAirplaneModeStatus:(id)arg1;
- (void)setRadioPrefs:(struct __SCPreferences { }*)arg1;
- (void)start;
- (void)stop;
- (void)updateAirplaneModeStatus;

@end
