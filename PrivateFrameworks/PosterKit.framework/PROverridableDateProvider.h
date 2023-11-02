
@interface PROverridableDateProvider : NSObject <PRDateProviding> {
    NSCalendar * _calendar;
    NSHashTable * _minuteObservers;
    NSTimer * _minuteTimer;
    NSDate * _overrideDate;
}

@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *overrideDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_minuteTimerFired;
- (void)_notifyObserversDidUpdateDate:(id)arg1;
- (void)_scheduleNextMinuteTimer;
- (void)_updateMinuteTimer;
- (void)addMinuteUpdateObserver:(id)arg1;
- (id)date;
- (id)init;
- (id)overrideDate;
- (void)removeMinuteUpdateObserver:(id)arg1;
- (void)setOverrideDate:(id)arg1;

@end
