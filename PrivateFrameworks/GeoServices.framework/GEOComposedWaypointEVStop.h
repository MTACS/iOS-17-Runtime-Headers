
@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding> {
    <GEOTransitArtworkDataSource> * _artwork;
    GEOComposedRouteEVChargingStationInfo * _chargingInfo;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _coordinate;
    bool  _isServerProvidedWaypoint;
    unsigned long long  _muid;
    NSString * _name;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artwork;
- (id)chargingInfo;
- (struct { double x1; double x2; double x3; })coordinate;
- (void)encodeWithCoder:(id)arg1;
- (id)geoWaypointTyped;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoWaypointInfo:(id)arg1;
- (id)initWithGeoWaypointInfo:(id)arg1 mapItem:(id)arg2;
- (bool)isServerProvidedWaypoint;
- (unsigned long long)muid;
- (id)name;

@end
