
@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding> {
    GEODirectionsError * _directionsError;
    NSError * _error;
    GEODirectionsRequest * _request;
    GEODirectionsResponse * _response;
    NSArray * _routeInfos;
    MNTraceRecordingData * _traceRecordingData;
}

@property (nonatomic, retain) GEODirectionsError *directionsError;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) GEODirectionsRequest *request;
@property (nonatomic, retain) GEODirectionsResponse *response;
@property (nonatomic, retain) NSArray *routeInfos;
@property (nonatomic, retain) MNTraceRecordingData *traceRecordingData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)directionsError;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (id)response;
- (id)routeInfos;
- (void)setDirectionsError:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRouteInfos:(id)arg1;
- (void)setTraceRecordingData:(id)arg1;
- (id)traceRecordingData;

@end
