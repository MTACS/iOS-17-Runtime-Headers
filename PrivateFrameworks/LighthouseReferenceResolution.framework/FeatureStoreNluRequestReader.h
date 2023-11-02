
@interface FeatureStoreNluRequestReader : NSObject

+ (id)getEvents;
+ (id)getEventsFromDate:(id)arg1;
+ (id)getEventsWithInteractionIds:(id)arg1;
+ (id)getEventsWithInteractionIdsFromDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
