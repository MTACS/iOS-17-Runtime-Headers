
@interface MNNavigationServiceCallback_DidUpdateBackgroundWalkingRoute : MNNavigationServiceCallbackParameters {
    MNActiveRouteInfo * _routeInfo;
}

@property (nonatomic, retain) MNActiveRouteInfo *routeInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)routeInfo;
- (void)setRouteInfo:(id)arg1;
- (unsigned long long)type;

@end
