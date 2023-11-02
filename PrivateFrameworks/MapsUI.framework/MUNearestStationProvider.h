
@interface MUNearestStationProvider : NSObject {
    unsigned long long  _lastRequestedNearestID;
    <MKLocationManagerOperation> * _locationOperation;
    MKMapItem * _nearestStation;
    NSError * _nearestStationError;
    <MKMapServiceTicket> * _nearestStationTicket;
}

@property (nonatomic, readonly) unsigned long long lastRequestedNearestID;
@property (nonatomic, readonly) MKMapItem *nearestStation;
@property (nonatomic, readonly) NSError *nearestStationError;

- (void).cxx_destruct;
- (void)cancel;
- (void)fetchStationForLineItemIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)lastRequestedNearestID;
- (id)nearestStation;
- (id)nearestStationError;
- (void)resetNearestStation;

@end
