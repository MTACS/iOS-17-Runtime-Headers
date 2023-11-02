
@interface VKRouteAnnotation : VKTrafficFeature {
    GEOStyleAttributes * _originalStyleAttributes;
    GEOComposedRouteAnnotation * _routeAnnotation;
}

@property (nonatomic, readonly) GEOMiniCard *infoCard;
@property (getter=_originalStyleAttributes, nonatomic, readonly) GEOStyleAttributes *originalStyleAttributes;

- (void).cxx_destruct;
- (id)_originalStyleAttributes;
- (id)infoCard;
- (id)initWithRouteAnnotation:(id)arg1 onRoute:(id)arg2;
- (void)populateDebugNode:(void*)arg1;

@end
