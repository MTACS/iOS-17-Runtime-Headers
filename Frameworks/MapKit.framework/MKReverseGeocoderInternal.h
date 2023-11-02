
@interface MKReverseGeocoderInternal : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  coordinate;
    <MKReverseGeocoderDelegate> * delegate;
    MKMapItem * mapItem;
    bool  querying;
    <MKMapServiceTicket> * ticket;
}

- (void).cxx_destruct;

@end
