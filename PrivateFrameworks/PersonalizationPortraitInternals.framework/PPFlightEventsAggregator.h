
@interface PPFlightEventsAggregator : PPEventsAggregator

- (id)_multiDestinationsFlights;
- (id)_returningFlightForFlight:(id)arg1 inPool:(id)arg2;
- (id)_simpleRoundTripFlights;
- (bool)isEvent:(id)arg1 dupeOfEvent:(id)arg2;
- (id)tripCandidatesFromEventsPool;

@end
