
@interface MKLocalSearch : NSObject {
    bool  _cancelled;
    MKLocalPointsOfInterestRequest * _pointsOfInterestRequest;
    MKLocalSearchRequest * _request;
    bool  _searching;
    <MKMapServiceSpatialPlaceLookupTicket> * _spatialPlaceLookupTicket;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    <MKMapServiceTicket> * _ticket;
}

@property (getter=isSearching, nonatomic, readonly) bool searching;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_phoneOnlyStartWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)_startPointsOfInterestFetchWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)_startWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)_ticketForSearchRequest:(id)arg1;
- (void)cancel;
- (id)init;
- (id)initWithPointsOfInterestRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)isSearching;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
