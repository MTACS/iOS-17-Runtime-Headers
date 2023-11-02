
@interface MNSessionUpdateResponseInfo : NSObject {
    NSError * _error;
    GEOETATrafficUpdateRequest * _request;
    GEOETATrafficUpdateResponse * _response;
    double  _responseTime;
    NSArray * _waypoints;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) GEOETATrafficUpdateRequest *request;
@property (nonatomic, retain) GEOETATrafficUpdateResponse *response;
@property (nonatomic) double responseTime;
@property (nonatomic, retain) NSArray *waypoints;

- (void).cxx_destruct;
- (id)error;
- (id)request;
- (id)response;
- (double)responseTime;
- (void)setError:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseTime:(double)arg1;
- (void)setWaypoints:(id)arg1;
- (id)waypoints;

@end
