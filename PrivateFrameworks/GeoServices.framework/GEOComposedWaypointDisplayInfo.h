
@interface GEOComposedWaypointDisplayInfo : NSObject <NSSecureCoding> {
    GEOARInfo * _arInfo;
    GEOPBTransitArtwork * _artwork;
    GEOComposedRouteEVChargingStationInfo * _evChargingInfo;
    NSString * _name;
    struct { 
        double latitude; 
        double longitude; 
    }  _position;
    GEOStyleAttributes * _styleAttributes;
    GEOComposedString * _waypointCaption;
}

@property (nonatomic, readonly) GEOARInfo *arInfo;
@property (nonatomic, readonly) GEOPBTransitArtwork *artwork;
@property (nonatomic, retain) GEOComposedRouteEVChargingStationInfo *evChargingInfo;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { double x1; double x2; } position;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) GEOComposedString *waypointCaption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initPositionWithGeoWaypointInfo:(id)arg1 waypoint:(id)arg2;
- (id)arInfo;
- (id)artwork;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)evChargingInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoWaypointInfo:(id)arg1 waypoint:(id)arg2;
- (id)name;
- (struct { double x1; double x2; })position;
- (void)setEvChargingInfo:(id)arg1;
- (void)setWaypointCaption:(id)arg1;
- (id)styleAttributes;
- (id)waypointCaption;

@end
