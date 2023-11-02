
@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider> {
    <CalDateProvider> * _dateProvider;
    <CALNTravelAdvisoryDescriptionGenerator> * _travelAdvisoryDescriptionGenerator;
}

@property (nonatomic, readonly) <CalDateProvider> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CALNTravelAdvisoryDescriptionGenerator> *travelAdvisoryDescriptionGenerator;

- (void).cxx_destruct;
- (id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2;
- (id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2;
- (id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(unsigned long long)arg1;
- (id)bodyForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 bodyContainsTravelAdvice:(bool*)arg3;
- (id)dateProvider;
- (id)initWithTravelAdvisoryDescriptionGenerator:(id)arg1 dateProvider:(id)arg2;
- (id)travelAdvisoryDescriptionGenerator;

@end
