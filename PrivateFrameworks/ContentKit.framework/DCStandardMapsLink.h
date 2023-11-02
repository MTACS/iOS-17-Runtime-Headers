
@interface DCStandardMapsLink : DCMapsLink {
    NSURL * _URL;
    NSDictionary * _queryDictionary;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSDictionary *queryDictionary;

+ (bool)isMapsURL:(id)arg1;
+ (bool)isStandardAppleMapsURL:(id)arg1;
+ (bool)isStandardGoogleMapsURL:(id)arg1;
+ (id)mapsLinkWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)centerLocation;
- (id)destinationAddress;
- (unsigned long long)directionsMode;
- (id)initWithURL:(id)arg1;
- (unsigned long long)mapType;
- (id)queryDictionary;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (void)setQueryDictionary:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)showsBicycling;
- (bool)showsStreetView;
- (bool)showsTraffic;
- (bool)showsTransit;
- (id)startAddress;
- (id)streetViewLocation;
- (long long)zoomLevel;

@end
