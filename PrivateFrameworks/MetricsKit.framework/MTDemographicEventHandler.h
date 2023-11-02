
@interface MTDemographicEventHandler : MTEventHandler

- (id)ageDataForUserId:(id)arg1 updateInterval:(double)arg2;
- (void)clearUserDefaultsForTopic:(id)arg1;
- (id)eventType;
- (id)eventVersion:(id)arg1;
- (bool)mtIncludeBaseFields;
- (id)totalYearsSinceDate:(id)arg1 calendar:(id)arg2;

@end
