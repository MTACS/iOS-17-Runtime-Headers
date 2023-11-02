
@protocol GEOVenueIdentifier <NSObject>

@required

- (bool)_hasBusinessID;
- (bool)_hasFeatureID;
- (bool)_hasVenueID;
- (unsigned long long)businessID;
- (NSArray *)componentIdentifiers;
- (unsigned long long)featureID;
- (GEOPDVenueIdentifier *)placeDataVenueIdentifier;
- (GEOPDVenueIdentifier *)placeDataVenueIdentifierForVenue;
- (unsigned long long)venueID;

@end
