
@protocol MKMapServiceSpatialPlaceLookupTicket <NSObject>

@required

- (GEOMapRegion *)boundingRegion;
- (void)cancel;
- (void)submitWithHandler:(void *)arg1 queue:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, NSObject<OS_dispatch_queue> *

@end
