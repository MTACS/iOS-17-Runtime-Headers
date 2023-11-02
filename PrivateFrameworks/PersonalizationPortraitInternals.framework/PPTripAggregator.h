
@interface PPTripAggregator : NSObject

+ (id)_eventsFromCategory:(unsigned char)arg1 inPool:(id)arg2;
+ (id)_tripCandidatesFromCategory:(unsigned char)arg1 andEvents:(id)arg2;
+ (id)keyForCategory:(unsigned char)arg1;
+ (id)mergeTripCandidates:(id)arg1;
+ (id)mergeTripCandidates:(id)arg1 supportsGroundTransportEvents:(bool)arg2;
+ (id)tripCandidatesWithEvents:(id)arg1;
+ (id)tripCandidatesWithEvents:(id)arg1 supportsGroundTransportEvents:(bool)arg2;
+ (id)tripEventsFromCandidates:(id)arg1;
+ (id)tripEventsWithEvents:(id)arg1 from:(id)arg2 to:(id)arg3;

@end
