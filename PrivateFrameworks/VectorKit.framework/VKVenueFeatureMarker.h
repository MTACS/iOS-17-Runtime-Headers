
@interface VKVenueFeatureMarker : VKMarker {
    bool  _localize;
}

@property (nonatomic, readonly) NSArray *buildings;
@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) GEOMapItemIdentifier *mapIdentifier;

- (id)buildings;
- (unsigned long long)businessID;
- (id)initWithVenue:(const void*)arg1 localize:(bool)arg2;
- (id)mapIdentifier;
- (id)name;
- (id)shortName;
- (const void*)venueFeatureMarker;

@end
