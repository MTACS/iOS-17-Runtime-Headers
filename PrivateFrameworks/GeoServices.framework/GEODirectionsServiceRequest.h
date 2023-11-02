
@interface GEODirectionsServiceRequest : NSObject {
    GEODirectionsRequest * _directionsRequest;
    GEODirectionsRequester * _directionsRequester;
    bool  _isCancelled;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDirectionsRequest:(id)arg1 directionsRequester:(id)arg2;

@end
