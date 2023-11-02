
@interface PKPaymentSetupProductRegionDataComplexPolygon : NSObject {
    unsigned long long  _exclusionaryPolygonCount;
    struct { struct { /* ? */ } *x1; unsigned long long x2; } * _exclusionaryPolygons;
    unsigned long long  _inclusionaryPolygonCount;
    struct { struct { /* ? */ } *x1; unsigned long long x2; } * _inclusionaryPolygons;
}

- (double)closestDistanceToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 inExclusionaryRegion:(bool*)arg2;
- (void)dealloc;
- (id)initWithInclusionaryZones:(id)arg1 exclusionaryZones:(id)arg2;

@end
