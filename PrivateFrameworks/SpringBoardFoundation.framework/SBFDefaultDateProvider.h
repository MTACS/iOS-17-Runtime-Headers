
@interface SBFDefaultDateProvider : NSObject <SBFDateProviding> {
    NSCalendar * _calendar;
    NSMutableDictionary * _minuteHandlers;
    NSTimer * _minuteTimer;
    unsigned long long  _nextToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_minuteTimerFired;
- (void)_scheduleNextMinuteTimer;
- (void)_updateMinuteTimer;
- (id)date;
- (id)init;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)arg1;
- (void)removeMinuteUpdateHandler:(id)arg1;

@end
