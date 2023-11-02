
@interface GEOComposedETARouteLeg : NSObject <NSSecureCoding> {
    GEOComposedRouteEVChargingStationInfo * _chargingStationInfo;
    GEOWaypointInfo * _destinationWaypointInfo;
    double  _length;
    GEOWaypointInfo * _originWaypointInfo;
    unsigned long long  _originalLegIndex;
    NSArray * _steps;
}

@property (nonatomic, retain) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (nonatomic, retain) GEOWaypointInfo *destinationWaypointInfo;
@property (nonatomic) double length;
@property (nonatomic, retain) GEOWaypointInfo *originWaypointInfo;
@property (nonatomic) unsigned long long originalLegIndex;
@property (nonatomic, retain) NSArray *steps;
@property (nonatomic, readonly) double travelDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chargingStationInfo;
- (id)description;
- (id)descriptionWithPrecision:(unsigned long long)arg1;
- (id)destinationWaypointInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)length;
- (id)originWaypointInfo;
- (unsigned long long)originalLegIndex;
- (void)setChargingStationInfo:(id)arg1;
- (void)setDestinationWaypointInfo:(id)arg1;
- (void)setLength:(double)arg1;
- (void)setOriginWaypointInfo:(id)arg1;
- (void)setOriginalLegIndex:(unsigned long long)arg1;
- (void)setSteps:(id)arg1;
- (id)steps;
- (double)travelDuration;

@end
