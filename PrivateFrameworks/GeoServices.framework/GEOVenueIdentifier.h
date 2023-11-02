
@interface GEOVenueIdentifier : NSObject <GEOVenueIdentifier> {
    unsigned long long  _businessID;
    NSArray * _componentIdentifiers;
    unsigned long long  _featureID;
    bool  _hasBusinessID;
    bool  _hasFeatureID;
    bool  _hasVenueID;
    NSArray * _originalIdentifiers;
    unsigned long long  _venueID;
}

@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) NSArray *componentIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long featureID;
@property (getter=_hasBusinessID, nonatomic, readonly) bool hasBusinessID;
@property (getter=_hasFeatureID, nonatomic, readonly) bool hasFeatureID;
@property (getter=_hasVenueID, nonatomic, readonly) bool hasVenueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long venueID;

+ (id)componentIdentifiersFromVenueIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (bool)_hasBusinessID;
- (bool)_hasFeatureID;
- (bool)_hasVenueID;
- (unsigned long long)businessID;
- (id)componentIdentifiers;
- (unsigned long long)featureID;
- (id)init;
- (id)initWithVenueID:(unsigned long long)arg1;
- (id)initWithVenueID:(unsigned long long)arg1 componentIdentifiers:(id)arg2;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3;
- (id)initWithVenueID:(unsigned long long)arg1 featureID:(unsigned long long)arg2 businessID:(unsigned long long)arg3 componentIdentifiers:(id)arg4;
- (id)initWithVenueIdentifiers:(id)arg1;
- (id)placeDataVenueIdentifier;
- (id)placeDataVenueIdentifierForVenue;
- (unsigned long long)venueID;

@end
