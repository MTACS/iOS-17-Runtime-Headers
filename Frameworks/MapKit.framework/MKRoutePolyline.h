
@interface MKRoutePolyline : MKPolyline <MKDirectionsResponsePolyline> {
    bool  _requiresModernMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_requiresModernMap, setter=_setRequiresModernMap:, nonatomic) bool requiresModernMap;
@property (readonly) Class superclass;

- (bool)_requiresModernMap;
- (void)_setRequiresModernMap:(bool)arg1;
- (id)_stepWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
