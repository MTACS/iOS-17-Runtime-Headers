
@interface MKLookAroundSceneRequest : NSObject {
    bool  _cancelled;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    bool  _loading;
    MKMapItem * _mapItem;
    <MKLocationManagerOperation> * _singleLocationUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    <MKMapServiceTicket> * _ticket;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) MKMapItem *mapItem;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 requestType:(unsigned long long)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_performLookupRequestWithMapItem:(id)arg1 orCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (void)getSceneWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithMapItem:(id)arg1;
- (bool)isCancelled;
- (bool)isLoading;
- (id)mapItem;

@end
