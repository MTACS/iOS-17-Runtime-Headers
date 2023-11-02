
@interface MKRouteStepPolyline : MKPolyline <MKDirectionsResponsePolyline> {
    MKRoutePolyline * _fullRoute;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_requiresModernMap, nonatomic, readonly) bool requiresModernMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithRoute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_requiresModernMap;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;

@end
