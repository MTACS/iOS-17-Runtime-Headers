
@interface GEOComposedRouteTraffic : NSObject <NSSecureCoding> {
    NSArray * _incidents;
    NSArray * _offRouteIncidents;
    NSArray * _trafficColors;
}

@property (nonatomic, readonly) NSArray *offRouteIncidents;
@property (nonatomic, readonly) NSArray *routeIncidents;
@property (nonatomic, readonly) NSArray *routeTrafficColors;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, readonly) NSArray *trafficIncidentOffsets;
@property (nonatomic, readonly) NSArray *trafficIncidents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_buildIncidentsForRoute:(id)arg1 etaRoute:(id)arg2 initializerData:(id)arg3;
- (id)_incidentsForRoute:(id)arg1;
- (id)_incidentsForRoute:(id)arg1 etaRoute:(id)arg2;
- (id)_trafficColorInfosFromDebugSettingsForRoute:(id)arg1;
- (id)_trafficColorInfosFromTrafficBuilder:(id)arg1 route:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorInfos:(id)arg1 incidentInfos:(id)arg2;
- (id)initWithRoute:(id)arg1 etaRoute:(id)arg2;
- (id)initWithRoute:(id)arg1 initializerData:(id)arg2;
- (id)offRouteIncidents;
- (id)routeIncidents;
- (id)routeTrafficColors;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (id)trafficIncidentOffsets;
- (id)trafficIncidents;

@end
