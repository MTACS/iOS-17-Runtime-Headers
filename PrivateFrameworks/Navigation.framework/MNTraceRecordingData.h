
@interface MNTraceRecordingData : NSObject <NSSecureCoding> {
    GEODirectionsRequest * _initialDirectionsRequest;
    NSError * _initialDirectionsRequestError;
    double  _initialDirectionsRequestTimestamp;
    GEODirectionsResponse * _initialDirectionsResponse;
    double  _initialDirectionsResponseTimestamp;
    MNLocation * _initialUserLocation;
    NSArray * _waypoints;
}

@property (nonatomic, retain) GEODirectionsRequest *initialDirectionsRequest;
@property (nonatomic, retain) NSError *initialDirectionsRequestError;
@property (nonatomic) double initialDirectionsRequestTimestamp;
@property (nonatomic, retain) GEODirectionsResponse *initialDirectionsResponse;
@property (nonatomic) double initialDirectionsResponseTimestamp;
@property (nonatomic, retain) MNLocation *initialUserLocation;
@property (nonatomic, retain) NSArray *waypoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initialDirectionsRequest;
- (id)initialDirectionsRequestError;
- (double)initialDirectionsRequestTimestamp;
- (id)initialDirectionsResponse;
- (double)initialDirectionsResponseTimestamp;
- (id)initialUserLocation;
- (void)setInitialDirectionsRequest:(id)arg1;
- (void)setInitialDirectionsRequestError:(id)arg1;
- (void)setInitialDirectionsRequestTimestamp:(double)arg1;
- (void)setInitialDirectionsResponse:(id)arg1;
- (void)setInitialDirectionsResponseTimestamp:(double)arg1;
- (void)setInitialUserLocation:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)waypoints;

@end
