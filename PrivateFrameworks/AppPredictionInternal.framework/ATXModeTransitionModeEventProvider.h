
@interface ATXModeTransitionModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    unsigned long long  _mode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (readonly) Class superclass;

- (id)aggregationEventsFromEvent:(id)arg1;
- (id)biomePublisherWithBookmark:(id)arg1;
- (id)bmStoreEventsForLast61DaysWithStartDateToday:(id)arg1 endDateToday:(id)arg2 includeWeekends:(bool)arg3 includeHolidays:(bool)arg4;
- (id)dateIntervalFromEvent:(id)arg1;
- (id)description;
- (bool)eventIsDuringThanksgivingShutdown:(id)arg1;
- (id)eventsFromPublisher;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (bool)isEventFromProvider:(id)arg1;
- (unsigned long long)mode;
- (bool)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)arg1 aggregationEvent:(id)arg2 isLocalToMode:(bool)arg3;

@end
