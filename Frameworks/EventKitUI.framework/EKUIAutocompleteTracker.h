
@interface EKUIAutocompleteTracker : NSObject {
    unsigned long long  _finalNumberOfAutocompleteResults;
    bool  _hasFinalizedTracking;
    bool  _hasTrackedAutocompleteQuery;
    bool  _hasTrackedAutocompleteResultsShown;
    bool  _hasTrackedNLResultShown;
    bool  _hasTrackedZKWQuery;
    bool  _hasTrackedZKWResultShown;
    EKCalendar * _initialCalendar;
    NSDate * _initialEndDate;
    bool  _initialIsAllDay;
    NSDate * _initialStartDate;
    NSTimeZone * _initialTimeZone;
}

@property unsigned long long finalNumberOfAutocompleteResults;
@property (retain) EKCalendar *initialCalendar;
@property (retain) NSDate *initialEndDate;
@property bool initialIsAllDay;
@property (retain) NSDate *initialStartDate;
@property (retain) NSTimeZone *initialTimeZone;

+ (bool)_isChangeToTrackedPropertySignificant:(unsigned long long)arg1;
+ (bool)_trackedEventProperty:(unsigned long long)arg1 isPresentInAutocompleteResult:(id)arg2;
+ (bool)_trackedEventProperty:(unsigned long long)arg1 wasOverriddenInEvent:(id)arg2 fromAutocompleteResult:(id)arg3;
+ (id)propertyName:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_augmentPayload:(id)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(bool)arg5;
- (bool)_trackedEventProperty:(unsigned long long)arg1 wasSetInNewEvent:(id)arg2;
- (unsigned long long)finalNumberOfAutocompleteResults;
- (void)finalizeAutocompleteTrackingOnSave:(bool)arg1 withEvent:(id)arg2 selectedResult:(id)arg3 selectedIndex:(unsigned long long)arg4 isZKW:(bool)arg5;
- (id)initialCalendar;
- (id)initialEndDate;
- (bool)initialIsAllDay;
- (id)initialStartDate;
- (id)initialTimeZone;
- (void)setFinalNumberOfAutocompleteResults:(unsigned long long)arg1;
- (void)setInitialCalendar:(id)arg1;
- (void)setInitialEndDate:(id)arg1;
- (void)setInitialIsAllDay:(bool)arg1;
- (void)setInitialStartDate:(id)arg1;
- (void)setInitialTimeZone:(id)arg1;
- (void)trackAutocompleteQuery;
- (void)trackAutocompleteResultsShown;
- (void)trackNLResultShown;
- (void)trackZKWQuery;
- (void)trackZKWResultShown;

@end
