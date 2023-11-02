
@interface DCMutableMapsLink : DCMapsLink {
    NSString * _centerLocation;
    NSString * _destinationAddress;
    unsigned long long  _directionsMode;
    unsigned long long  _mapType;
    NSString * _searchLocation;
    NSString * _searchNearQuery;
    NSString * _searchQuery;
    bool  _showsBicycling;
    bool  _showsStreetView;
    bool  _showsTraffic;
    bool  _showsTransit;
    NSString * _startAddress;
    NSString * _streetViewLocation;
    long long  _zoomLevel;
}

@property (nonatomic, copy) NSString *centerLocation;
@property (nonatomic, copy) NSString *destinationAddress;
@property (nonatomic) unsigned long long directionsMode;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic, copy) NSString *searchLocation;
@property (nonatomic, copy) NSString *searchNearQuery;
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic) bool showsBicycling;
@property (nonatomic) bool showsStreetView;
@property (nonatomic) bool showsTraffic;
@property (nonatomic) bool showsTransit;
@property (nonatomic, copy) NSString *startAddress;
@property (nonatomic, copy) NSString *streetViewLocation;
@property (nonatomic) long long zoomLevel;

- (void).cxx_destruct;
- (id)centerLocation;
- (id)destinationAddress;
- (unsigned long long)directionsMode;
- (unsigned long long)mapType;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (void)setCenterLocation:(id)arg1;
- (void)setDestinationAddress:(id)arg1;
- (void)setDirectionsMode:(unsigned long long)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchNearQuery:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setShowsBicycling:(bool)arg1;
- (void)setShowsStreetView:(bool)arg1;
- (void)setShowsTraffic:(bool)arg1;
- (void)setShowsTransit:(bool)arg1;
- (void)setStartAddress:(id)arg1;
- (void)setStreetViewLocation:(id)arg1;
- (void)setZoomLevel:(long long)arg1;
- (bool)showsBicycling;
- (bool)showsStreetView;
- (bool)showsTraffic;
- (bool)showsTransit;
- (id)startAddress;
- (id)streetViewLocation;
- (long long)zoomLevel;

@end
