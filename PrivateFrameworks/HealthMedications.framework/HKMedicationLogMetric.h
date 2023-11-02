
@interface HKMedicationLogMetric : NSObject {
    long long  _actions;
    long long  _context;
    NSDictionary * _eventPayload;
    HKMedicationAnalyticsGenericFieldsProvider * _genericDataProvider;
    NSNumber * _hoursAgoLoggedForMax;
    NSNumber * _hoursAgoLoggedForMin;
    NSNumber * _hoursFromScheduledTimeLoggedMax;
    NSNumber * _hoursFromScheduledTimeLoggedMin;
    NSNumber * _hoursFromScheduledToTakenOrSkippedMax;
    NSNumber * _hoursFromScheduledToTakenOrSkippedMin;
    bool  _isLoggingMultipleMeds;
    NSNumber * _isPartiallyLoggingScheduledMeds;
    long long  _provenance;
}

@property (nonatomic, copy) NSDictionary *eventPayload;

+ (id)eventName;

- (void).cxx_destruct;
- (id)actionsPayload;
- (id)contextValue;
- (id)description;
- (id)eventPayload;
- (id)initWithActions:(long long)arg1 provenance:(long long)arg2 context:(long long)arg3 loggingMultipleMeds:(bool)arg4 hoursAgoLoggedForMax:(id)arg5 hoursAgoLoggedForMin:(id)arg6 hoursFromScheduledTimeLoggedMax:(id)arg7 hoursFromScheduledTimeLoggedMin:(id)arg8 hoursFromScheduledToTakenOrSkippedMax:(id)arg9 hoursFromScheduledToTakenOrSkippedMin:(id)arg10 isPartiallyLoggingScheduledMeds:(id)arg11 dataSource:(id)arg12;
- (id)provenanceValue;
- (void)setEventPayload:(id)arg1;

@end
