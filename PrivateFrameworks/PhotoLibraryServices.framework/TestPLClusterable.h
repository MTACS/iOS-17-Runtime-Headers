
@interface TestPLClusterable : NSObject <PLRegionsClusteringItem> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _pl_coordinate;
    NSDate * _pl_date;
    double  _pl_gpsHorizontalAccuracy;
    NSString * _pl_uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_date;
@property (nonatomic, readonly) double pl_gpsHorizontalAccuracy;
@property (nonatomic, readonly) NSString *pl_uuid;
@property (readonly) Class superclass;

+ (id)clusterableWithLatitude:(double)arg1 longitude:(double)arg2 time:(double)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 time:(double)arg3;
- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_date;
- (double)pl_gpsHorizontalAccuracy;
- (id)pl_uuid;

@end
