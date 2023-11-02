
@interface _MKSpatialPlaceLookupTicket : NSObject <MKMapServiceSpatialPlaceLookupTicket> {
    NSError * _error;
    GEOMapRegion * _resultBoundingRegion;
    <GEOMapServiceSpatialPlaceLookupTicket> * _spatialPlaceLookupTicket;
}

@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)boundingRegion;
- (void)cancel;
- (id)initWithTicket:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 queue:(id)arg2;
- (id)traits;

@end
