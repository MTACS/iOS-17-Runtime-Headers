
@interface ATXTripEventsDataSource : NSObject {
    ATXHeuristicDevice * _device;
    PPEventStore * _eventStore;
}

- (void).cxx_destruct;
- (id)fetchTripEventsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (void)getLocationForMostRelevantTripInRangeFrom:(id)arg1 to:(id)arg2 callback:(id /* block */)arg3;
- (id)initWithDevice:(id)arg1;

@end
