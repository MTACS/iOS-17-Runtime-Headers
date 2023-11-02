
@interface DCNewGoogleMapsLink : DCMapsLink {
    NSURL * _URL;
    unsigned long long  _directionsMode;
    int  _linkType;
    NSString * _location;
    unsigned long long  _mapType;
    NSArray * _mapsURLComponents;
    bool  _parsed;
    bool  _showsBicycling;
    bool  _showsStreetView;
    bool  _showsTraffic;
    bool  _showsTransit;
    long long  _zoomLevel;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) int linkType;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSArray *mapsURLComponents;
@property (nonatomic, readonly) bool parsed;

+ (bool)isMapsURL:(id)arg1;
+ (id)mapsLinkWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)centerLocation;
- (id)dataString;
- (id)destinationAddress;
- (unsigned long long)directionsMode;
- (id)initWithURL:(id)arg1;
- (id)latLonZoomString;
- (int)linkType;
- (id)location;
- (unsigned long long)mapType;
- (id)mapsURLComponentAtIndex:(long long)arg1;
- (id)mapsURLComponents;
- (void)parse;
- (void)parseLatLonZoom;
- (void)parseLinkType;
- (void)parseMapsData;
- (bool)parsed;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (void)setLocation:(id)arg1;
- (void)setMapsURLComponents:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)showsBicycling;
- (bool)showsStreetView;
- (bool)showsTraffic;
- (bool)showsTransit;
- (id)startAddress;
- (id)streetViewLocation;
- (long long)zoomLevel;

@end
