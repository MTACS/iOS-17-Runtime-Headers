
@interface PGPublicEventMatchingOptions : NSObject {
    NSDateInterval * _actualAttendanceDateInterval;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinates;
    NSDateInterval * _expandedAttendanceDateInterval;
    PGMeaningfulEventMatchingCriteria * _matchingCriteria;
    PGMeaningfulEventProcessorCache * _meaningfulEventProcessorCache;
    PGGraphMomentNode * _momentNode;
    NSArray * _temporalClusterEvents;
    <CLSTimeLocationTuple> * _timeLocationTuple;
}

@property (nonatomic, readonly) NSDateInterval *actualAttendanceDateInterval;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinates;
@property (nonatomic, readonly) NSDateInterval *expandedAttendanceDateInterval;
@property (nonatomic, readonly) PGMeaningfulEventMatchingCriteria *matchingCriteria;
@property (nonatomic, readonly) PGMeaningfulEventProcessorCache *meaningfulEventProcessorCache;
@property (nonatomic, readonly) PGGraphMomentNode *momentNode;
@property (nonatomic, readonly) NSArray *temporalClusterEvents;
@property (nonatomic, readonly) <CLSTimeLocationTuple> *timeLocationTuple;

- (void).cxx_destruct;
- (void)_createAttendanceDateIntervals;
- (id)_readTemporalClusterEvents;
- (id)actualAttendanceDateInterval;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (id)expandedAttendanceDateInterval;
- (id)initWithTimeLocationTuple:(id)arg1 momentNode:(id)arg2 meaningfulEventProcessorCache:(id)arg3;
- (id)matchingCriteria;
- (id)meaningfulEventProcessorCache;
- (id)momentNode;
- (id)temporalClusterEvents;
- (id)timeLocationTuple;

@end
