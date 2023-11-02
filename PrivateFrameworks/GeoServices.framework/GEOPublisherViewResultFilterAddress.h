
@interface GEOPublisherViewResultFilterAddress : NSObject {
    GEOPDPublisherViewResultFilterAddress * _filterAddressIdentifier;
    GEOPDEntity * _placeEntity;
}

@property (nonatomic, readonly) GEOPDPublisherViewResultFilterAddress *addressIdentifier;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) GEOMapItemIdentifier *filterAddressIdentifier;

- (void).cxx_destruct;
- (id)addressIdentifier;
- (id)displayString;
- (id)filterAddressIdentifier;
- (id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2;

@end
