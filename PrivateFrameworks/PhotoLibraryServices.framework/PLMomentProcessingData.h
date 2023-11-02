
@interface PLMomentProcessingData : NSObject <PLMomentProcessingProtocol> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _pl_coordinate;
    NSDate * _pl_endDate;
    CLLocation * _pl_location;
    unsigned short  _pl_locationType;
    unsigned long long  _pl_numberOfAssets;
    short  _pl_originatorState;
    NSDate * _pl_startDate;
    NSString * _pl_uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_endDate;
@property (nonatomic, readonly) CLLocation *pl_location;
@property (nonatomic, readonly) unsigned short pl_locationType;
@property (nonatomic, readonly) unsigned long long pl_numberOfAssets;
@property (nonatomic, readonly) short pl_originatorState;
@property (nonatomic, readonly) NSDate *pl_startDate;
@property (nonatomic, readonly) NSString *pl_uuid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMoment:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_endDate;
- (id)pl_location;
- (unsigned short)pl_locationType;
- (unsigned long long)pl_numberOfAssets;
- (short)pl_originatorState;
- (id)pl_startDate;
- (id)pl_uuid;

@end
