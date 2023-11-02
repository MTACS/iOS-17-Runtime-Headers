
@interface WBSWebExtensionAlarmMetadata : NSObject {
    NSMutableDictionary * _dictionary;
    double  _initialTimerScheduleSeconds;
    bool  _isValid;
    bool  _repeats;
    WBSDispatchSourceTimer * _timer;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) WBSDispatchSourceTimer *timer;

- (void).cxx_destruct;
- (void)_scheduleWithHandler:(id /* block */)arg1;
- (id)dictionary;
- (id)initWithName:(id)arg1 scheduledTime:(id)arg2 periodInMinutes:(id)arg3 initialTimerScheduleSeconds:(double)arg4;
- (bool)isValid;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
