
@interface MNNavigationServiceCallback_DidUpdateDisplayETA : MNNavigationServiceCallbackParameters {
    MNBatteryChargeInfo * _batteryChargeInfo;
    MNDisplayETAInfo * _displayETAInfo;
    MNRouteDistanceInfo * _routeDistanceInfo;
}

@property (nonatomic, retain) MNBatteryChargeInfo *batteryChargeInfo;
@property (nonatomic, retain) MNDisplayETAInfo *displayETAInfo;
@property (nonatomic, retain) MNRouteDistanceInfo *routeDistanceInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)batteryChargeInfo;
- (id)displayETAInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)routeDistanceInfo;
- (void)setBatteryChargeInfo:(id)arg1;
- (void)setDisplayETAInfo:(id)arg1;
- (void)setRouteDistanceInfo:(id)arg1;
- (unsigned long long)type;

@end
