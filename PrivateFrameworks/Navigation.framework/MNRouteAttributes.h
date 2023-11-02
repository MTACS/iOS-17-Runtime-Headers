
@interface MNRouteAttributes : GEORouteAttributes <NSCopying, NSSecureCoding> {
    bool  _forceUpdate;
    bool  _hasResolvedRules;
    NSArray * _latLngs;
    NSError * _lprError;
    NSArray * _lprRules;
    VGVehicle * _vehicle;
    geo_isolater * _vehicleIsolator;
    NSError * _vgError;
}

@property (nonatomic) bool hasResolvedRules;

+ (void)_loadLPRRulesForWaypoints:(id)arg1 forceUpdate:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_loadRulesIfNecessaryWithVehicle:(id)arg1 queue:(id)arg2 finishedHandler:(id /* block */)arg3;
- (void)_populateRouteAttributesWithVehicle:(id)arg1 finishedHandler:(id /* block */)arg2;
- (void)_resolveSelectedVehicle:(id /* block */)arg1;
- (void)buildRouteAttributes:(id)arg1 queue:(id)arg2 result:(id /* block */)arg3;
- (void)buildRouteAttributes:(id)arg1 result:(id /* block */)arg2;
- (void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasResolvedRules;
- (id)initWithAttributes:(id)arg1 latLngs:(id)arg2;
- (id)initWithAttributes:(id)arg1 waypoints:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setHasResolvedRules:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)vehicle;

@end
