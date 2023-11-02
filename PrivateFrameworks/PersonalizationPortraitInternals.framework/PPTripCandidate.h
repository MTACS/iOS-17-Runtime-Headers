
@interface PPTripCandidate : NSObject {
    NSArray * _flights;
    NSArray * _groundTransports;
    NSArray * _hotels;
    NSArray * _others;
}

@property (nonatomic, retain) NSArray *flights;
@property (nonatomic, retain) NSArray *groundTransports;
@property (nonatomic, retain) NSArray *hotels;
@property (nonatomic, retain) NSArray *others;

- (void).cxx_destruct;
- (bool)canBeMergedWithTripCandidate:(id)arg1;
- (bool)canBeMergedWithTripCandidate:(id)arg1 supportsGroundTransportEvents:(bool)arg2;
- (id)flights;
- (id)groundTransports;
- (id)hotels;
- (id)initWithTripCandidateA:(id)arg1 andTripCandidateB:(id)arg2;
- (id)others;
- (void)setFlights:(id)arg1;
- (void)setGroundTransports:(id)arg1;
- (void)setHotels:(id)arg1;
- (void)setOthers:(id)arg1;
- (bool)shouldPromoteToTripEvent;
- (id)tripEventFromCandidate;

@end
