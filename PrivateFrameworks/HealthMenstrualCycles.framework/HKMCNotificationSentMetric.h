
@interface HKMCNotificationSentMetric : NSObject {
    NSNumber * _areHealthNotificationsAuthorized;
    NSString * _category;
    NSDictionary * _eventPayload;
    NSNumber * _internalLiveOnCycleFactorOverrideEnabled;
    NSNumber * _numberOfDaysOffsetFromFertileWindowEnd;
    NSNumber * _numberOfDaysShiftedForFertileWindow;
    NSNumber * _numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification;
}

@property (nonatomic, retain) NSNumber *areHealthNotificationsAuthorized;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, copy) NSDictionary *eventPayload;
@property (nonatomic, retain) NSNumber *internalLiveOnCycleFactorOverrideEnabled;
@property (nonatomic, retain) NSNumber *numberOfDaysOffsetFromFertileWindowEnd;
@property (nonatomic, retain) NSNumber *numberOfDaysShiftedForFertileWindow;
@property (nonatomic, retain) NSNumber *numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification;

+ (id)eventName;

- (void).cxx_destruct;
- (id)areHealthNotificationsAuthorized;
- (id)category;
- (id)description;
- (id)eventPayload;
- (id)initWithCategory:(id)arg1 areHealthNotificationsAuthorized:(id)arg2;
- (id)internalLiveOnCycleFactorOverrideEnabled;
- (id)numberOfDaysOffsetFromFertileWindowEnd;
- (id)numberOfDaysShiftedForFertileWindow;
- (id)numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification;
- (void)setAreHealthNotificationsAuthorized:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEventPayload:(id)arg1;
- (void)setInternalLiveOnCycleFactorOverrideEnabled:(id)arg1;
- (void)setNumberOfDaysOffsetFromFertileWindowEnd:(id)arg1;
- (void)setNumberOfDaysShiftedForFertileWindow:(id)arg1;
- (void)setNumberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification:(id)arg1;

@end
