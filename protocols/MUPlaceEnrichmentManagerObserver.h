
@protocol MUPlaceEnrichmentManagerObserver <NSObject>

@required

- (void)placeEnrichmentAPIContollerDidFetchEnrichmentData:(GEOEnrichmentData *)arg1 forMapItem:(MKMapItem *)arg2;

@end
