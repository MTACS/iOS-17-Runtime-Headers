
@protocol MKQuickRouteManagerDelegate <NSObject>

@required

- (bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (bool)quickRouteShouldOnlyUseAutomobile;

@optional

- (unsigned long long)preferredDirectionsTypeForQuickRoute;

@end
