
@interface MNNavigationServiceDirectionsRequestTicket : NSObject {
    GEODirectionsRequest * _directionsRequest;
    GEODirectionsResponse * _directionsResponse;
    MNNavigationClientProxy * _proxy;
    MNDirectionsRequestDetails * _request;
    NSUUID * _requestIdentifier;
    MNTraceRecordingData * _traceRecordingData;
}

@property (nonatomic, readonly) GEODirectionsRequest *directionsRequest;
@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) MNTraceRecordingData *traceRecordingData;

- (void).cxx_destruct;
- (void)cancel;
- (id)directionsRequest;
- (id)directionsResponse;
- (id)initWithProxy:(id)arg1 request:(id)arg2;
- (void)submitWithHandler:(id /* block */)arg1;
- (id)traceRecordingData;

@end
