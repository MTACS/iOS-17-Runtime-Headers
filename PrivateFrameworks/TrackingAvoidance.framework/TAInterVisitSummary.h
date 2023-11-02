
@interface TAInterVisitSummary : NSObject {
    NSArray * _deviceLocationHistory;
    NSDateInterval * _deviceObservationInterval;
    TASPAdvertisement * _latestObservation;
}

@property (nonatomic, readonly) NSArray *deviceLocationHistory;
@property (nonatomic, readonly) NSDateInterval *deviceObservationInterval;
@property (nonatomic, readonly) TASPAdvertisement *latestObservation;

- (void).cxx_destruct;
- (id)deviceLocationHistory;
- (id)deviceObservationInterval;
- (id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3;
- (id)latestObservation;

@end
