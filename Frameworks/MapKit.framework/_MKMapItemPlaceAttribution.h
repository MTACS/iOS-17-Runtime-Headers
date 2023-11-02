
@interface _MKMapItemPlaceAttribution : _MKMapItemAttribution {
    GEOMapItemPlaceAttribution * _geoPlaceAttribution;
}

@property (nonatomic, readonly) NSArray *checkInURLs;

- (void).cxx_destruct;
- (id)checkInURLs;
- (id)initWithGEOMapItemAttribution:(id)arg1;

@end
