
@interface PGConsolidatedAddress : NSObject <CLSTimeLocationTuple> {
    NSArray * _addressEdgesSortedByTime;
    PGGraphAddressNode * _addressNode;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centerCoordinates;
    double  _duration;
    NSDate * _expandedEndDate;
    NSDate * _expandedStartDate;
    NSDate * _startDate;
    NSString * _timeLocationIdentifier;
}

@property (nonatomic, readonly) NSArray *addressEdgesSortedByTime;
@property (nonatomic, readonly) PGGraphAddressNode *addressNode;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinates;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expandedEndDate;
@property (nonatomic, readonly) NSDate *expandedStartDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timeLocationIdentifier;

- (void).cxx_destruct;
- (id)addressEdgesSortedByTime;
- (id)addressNode;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinates;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (id)description;
- (double)duration;
- (id)endDate;
- (id)expandedEndDate;
- (id)expandedStartDate;
- (unsigned long long)hash;
- (id)initWithAddressNode:(id)arg1 addressEdgesSortedByTime:(id)arg2 centerCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (id)startDate;
- (id)timeLocationIdentifier;

@end
