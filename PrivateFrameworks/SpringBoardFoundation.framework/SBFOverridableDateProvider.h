
@interface SBFOverridableDateProvider : NSObject <SBFDateProviding, SBFDateTimeOverrideObserver> {
    SBFDateTimeController * _dateTimeController;
    NSMutableDictionary * _minuteHandlers;
    unsigned long long  _nextToken;
    NSDate * _overrideDate;
    double  _overrideDateOffset;
    <SBFDateProviding> * _underlyingProvider;
    id  _underlyingToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fireHandlersForDate:(id)arg1;
- (void)_updateForOverrides;
- (void)_updateUnderlyingProvider;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (id)date;
- (id)init;
- (id)initWithDateProvider:(id)arg1;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)arg1;
- (void)removeMinuteUpdateHandler:(id)arg1;

@end
