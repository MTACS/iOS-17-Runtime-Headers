
@interface GEOMapItemVenueInfo : NSObject <GEOMapItemVenueInfo> {
    <GEOMapItemVenueContents> * _contents;
    NSArray * _filters;
    GEOMapItemParentVenue * _parent;
    int  _venueFeatureType;
    <GEOVenueIdentifier> * _venueIdentifier;
}

@property (nonatomic, readonly) <GEOMapItemVenueContents> *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemParentVenue *parent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int venueFeatureType;
@property (nonatomic, readonly) <GEOVenueIdentifier> *venueIdentifier;

- (void).cxx_destruct;
- (id)_filtersFromVenueInfo:(id)arg1;
- (id)contents;
- (id)filters;
- (id)init;
- (id)initWithIdentifier:(id)arg1 featureType:(int)arg2 filters:(id)arg3 parent:(id)arg4 contents:(id)arg5;
- (id)initWithVenueInfo:(id)arg1;
- (id)parent;
- (int)venueFeatureType;
- (id)venueIdentifier;

@end
